#include "daScript/misc/platform.h"

#include "module_builtin.h"

#include "daScript/ast/ast_interop.h"

#include "daScript/simulate/runtime_array.h"
#include "daScript/simulate/runtime_table.h"
#include "daScript/simulate/runtime_profile.h"

namespace das
{
	struct ExportFunctionAnnotation : FunctionAnnotation {
		ExportFunctionAnnotation() : FunctionAnnotation("export") { }
		virtual bool apply(ExprBlock *, const AnnotationArgumentList &, string & err) override {
			err = "can't export block";
			return false;
		}
		virtual bool finalize(ExprBlock *, const AnnotationArgumentList &, string &) override {
			return true;
		}
		virtual bool apply(const FunctionPtr &, const AnnotationArgumentList &, string &) override {
			return true;
		};
		virtual bool finalize(const FunctionPtr & func, const AnnotationArgumentList &, string &) override {
			func->exports = true;
			return true;
		}
	};

    // core functions

    void builtin_throw ( char * text, Context * context ) {
        context->throw_error(text);
    }

    void builtin_print ( char * text, Context * context ) {
        context->to_out(text);
    }

    vec4f builtin_breakpoint ( Context & context, SimNode_CallBase * call, vec4f * ) {
        context.breakPoint(call->debug.column, call->debug.line);
        return v_zero();
    }

    void builtin_stackwalk ( Context * context) {
        context->stackWalk();
    }

    void builtin_terminate ( Context * context ) {
        context->stopFlags |= EvalFlags::stopForTerminate;
    }

    int builtin_table_size ( const Table * arr ) {
        return arr->size;
    }

    int builtin_table_capacity ( const Table * arr ) {
        return arr->capacity;
    }

    void builtin_table_clear ( Table * arr, Context * context ) {
        table_clear(*context, *arr);
    }

    bool builtin_string_endswith ( const char * str, const char * cmp, Context * context ) {
        const uint32_t strLen = stringLengthSafe ( *context, str );
        const uint32_t cmpLen = stringLengthSafe ( *context, cmp );
        return (cmpLen > strLen) ? false : memcmp(&str[strLen - cmpLen], cmp, cmpLen) == 0;
    }

    bool builtin_string_startswith ( const char * str, const char * cmp, Context * context ) {
        const uint32_t strLen = stringLengthSafe ( *context, str );
        const uint32_t cmpLen = stringLengthSafe ( *context, cmp );
        return (cmpLen > strLen) ? false : memcmp(str, cmp, cmpLen) == 0;
    }

    static const char* strip_l(const char *str)
    {
        const char *t = str;
        while (((*t) != '\0') && isspace(*t))
            t++;
        return t;
    }

    static const char* strip_r(const char *str, uint32_t len)
    {
        if (len == 0)
            return str;
        const char *t = &str[len-1];
        while (t >= str && isspace(*t))
            t--;
        return t + 1;
    }

    char* builtin_string_strip ( const char *str, Context * context )
    {
        const uint32_t strLen = stringLengthSafe ( *context, str );
        if (!strLen)
            return nullptr;
        const char *start = strip_l(str);
        const char *end = strip_r(str, strLen);
        return end > start ? context->heap.allocateString(start, uint32_t(end-start)) : nullptr;
    }
    char* builtin_string_strip_left ( const char *str, Context * context )
    {
        const uint32_t strLen = stringLengthSafe ( *context, str );
        if (!strLen)
            return nullptr;
        const char *start = strip_l(str);
        return start-str < strLen ? context->heap.allocateString(start, strLen-uint32_t(start-str)) : nullptr;
    }
    char* builtin_string_strip_right ( const char *str, Context * context )
    {
        const uint32_t strLen = stringLengthSafe ( *context, str );
        if (!strLen)
            return nullptr;
        const char *end = strip_r(str, strLen);
        return end != str ? context->heap.allocateString(str, uint32_t(end-str)) : nullptr;
    }

    void Module_BuiltIn::addRuntime(ModuleLibrary & lib) {
		// function annotations
		addAnnotation(make_shared<ExportFunctionAnnotation>());
        // functions
        addExtern<DAS_BIND_FUN(builtin_throw)>         (*this, lib, "throw");
        addExtern<DAS_BIND_FUN(builtin_print)>         (*this, lib, "print");
        addExtern<DAS_BIND_FUN(builtin_terminate)> (*this, lib, "terminate");
        addExtern<DAS_BIND_FUN(builtin_stackwalk)> (*this, lib, "stackwalk");
        addInterop<builtin_breakpoint,void>     (*this, lib, "breakpoint");
        // function-like expresions
        addCall<ExprAssert>         ("assert");
        addCall<ExprStaticAssert>   ("static_assert");
        addCall<ExprDebug>          ("debug");
        addCall<ExprHash>           ("hash");
        // table functions
        addExtern<DAS_BIND_FUN(builtin_table_clear)>(*this, lib, "clear", true);
        addExtern<DAS_BIND_FUN(builtin_table_size)>(*this, lib, "length", false);
        addExtern<DAS_BIND_FUN(builtin_table_capacity)>(*this, lib, "capacity", false);
        // table expressions
        addCall<ExprErase>("__builtin_table_erase");
        addCall<ExprFind>("__builtin_table_find");
        addCall<ExprKeys>("keys");
        addCall<ExprValues>("values");
        // blocks
        addCall<ExprInvoke>("invoke");
        // profile
        addExtern<DAS_BIND_FUN(builtin_profile)>(*this,lib,"profile");
        // string
        addExtern<DAS_BIND_FUN(builtin_string_endswith)>(*this, lib, "endswith", false);
        addExtern<DAS_BIND_FUN(builtin_string_startswith)>(*this, lib, "startswith", false);
        addExtern<DAS_BIND_FUN(builtin_string_strip)>(*this, lib, "strip", false);
        addExtern<DAS_BIND_FUN(builtin_string_strip_right)>(*this, lib, "strip_right", false);
        addExtern<DAS_BIND_FUN(builtin_string_strip_left)>(*this, lib, "strip_left", false);
    }
}
