#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif



#include "codegen/il2cpp-codegen.h"



IL2CPP_EXTERN_C const RuntimeMethod Program_Main_mBD5DDCE6FFAE5457EAAA6239EFB2248027F15935_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END




// System.Void Unity.Tiny.EntryPoint.Program::Main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Program_Main_mBD5DDCE6FFAE5457EAAA6239EFB2248027F15935 ();
#include "il2cpp-api.h"
#include "utils/StringUtils.h"
#include "utils/Exception.h"
#if IL2CPP_TARGET_WINDOWS_DESKTOP
#include "Windows.h"
#include "Shellapi.h"
#endif

#if IL2CPP_TARGET_LUMIN
#include "ml_lifecycle.h"
#endif

int MainInvoker()
{
	Program_Main_mBD5DDCE6FFAE5457EAAA6239EFB2248027F15935();
	return 0;
}

int EntryPoint()
{
	#if IL2CPP_MONO_DEBUGGER
	#define DEBUGGER_STRINGIFY(x) #x
	#define DEBUGGER_STRINGIFY2(x) DEBUGGER_STRINGIFY(x)
	il2cpp_debugger_set_agent_options("--debugger-agent=transport=dt_socket,address=0.0.0.0:" DEBUGGER_STRINGIFY2(IL2CPP_DEBUGGER_PORT) ",server=y,suspend=n");
	#undef DEBUGGER_STRINGIFY
	#undef DEBUGGER_STRINGIFY2
	#endif

	#if IL2CPP_DISABLE_GC
	il2cpp_gc_disable();
	#endif

	il2cpp_init();

#if IL2CPP_TARGET_LUMIN
	MLLifecycleSetReadyIndication();
#endif

	int exitCode = MainInvoker();

	return exitCode;
}

#if IL2CPP_TARGET_WINDOWS

#if !IL2CPP_TARGET_WINDOWS_DESKTOP
#include "ActivateApp.h"
#endif

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
#if IL2CPP_TARGET_WINDOWS_DESKTOP
	int returnValue = EntryPoint();
	ExitProcess(returnValue);
#elif IL2CPP_WINRT_NO_ACTIVATE
	wchar_t executableName[MAX_PATH + 2];
	GetModuleFileNameW(nullptr, executableName, MAX_PATH + 2);

	int argc = 1;
	const wchar_t* argv[] = { executableName };
	return EntryPoint(argc, argv);
#else
	return WinRT::Activate(EntryPoint);
#endif
}

#else

int main()
{
	return EntryPoint();
}

#endif
