
#pragma once

#ifdef NOVA_PLATFORM_WINDOWS
	#ifdef NOVA_BUILD_DLL
		#define NOVA_API __declspec(dllexport)
	#else
		#define NOVA_API __declspec(dllimport)
	#endif // NOVA_BUILD_DLL
#endif // NOVA_PLATFORM_WINDOWS
