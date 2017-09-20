// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the WASAPI_DLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// WASAPI_DLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WASAPI_DLL_EXPORTS
#define WASAPI_DLL_API __declspec(dllexport)
#else
#define WASAPI_DLL_API __declspec(dllimport)
#endif

#define SAFE_RELEASE(punk)  \
              if ((punk) != NULL)  \
                { (punk)->Release(); (punk) = NULL; }

namespace WASAPI_DLL 
{
	enum WASAPI_DLL_API DataDirection
	{
		Capture = 0,
		Render = 1
	};

	//Defines an audio format.
	struct WASAPI_DLL_API AudioFormat 
	{
		unsigned int Channels : 8;
		unsigned int SampleRate : 24;
		unsigned int ValidData : 16;
		unsigned int Container : 16;
	};

	// Provides interfaces that C# can link against to query and open WASAPI streams. 
	class WASAPI_DLL_API CWasapiInterface
	{
	public:
		//Constructor
		CWasapiInterface();
		bool IsInitialized();
	private:
		//Variables
		bool _initialized;
		//Methods
		//Destructor
		~CWasapiInterface();
	};
}