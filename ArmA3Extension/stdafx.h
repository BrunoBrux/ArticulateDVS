// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// TODO: reference additional headers your program requires here
#include <string>
#include <thread>
#include <queue>
#include <namedpipeapi.h>


#ifdef UNICODE
typedef std::string String;
#else
typedef std::wstring String;
#endif