// WASAPI_DLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "WASAPI_DLL.h"

WASAPI_DLL::CWasapiInterface::CWasapiInterface()
{
	_initialized = false;
}

bool WASAPI_DLL::CWasapiInterface::IsInitialized()
{
	return _initialized;
}

WASAPI_DLL::CWasapiInterface::~CWasapiInterface()
{
}
