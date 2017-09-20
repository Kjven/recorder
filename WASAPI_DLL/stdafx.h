// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
//WASAPI headers
#include <Audioclient.h>
#include <audiopolicy.h>
//MMDevice API headers
#include <mmdeviceapi.h>
//Device properties
#include <functiondiscoverykeys.h>