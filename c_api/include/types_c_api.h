#pragma once

#ifdef WINDOWSPC
	#define TORTILLA_EXPORT __declspec(dllexport)
#else
	#define TORTILLA_EXPORT
#endif

struct TortillaAllocatorObject;
struct TortillaMeshObject;