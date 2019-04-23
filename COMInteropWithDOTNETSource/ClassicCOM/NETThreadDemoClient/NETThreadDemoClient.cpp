#include "stdafx.h"
#include "iostream.h"
#include "tchar.h"
#include "stdio.h"
#import "mscorlib.tlb"

// Import the .NET component's typelibrary
#import "HelloDotNet.tlb" no_namespace

// Worker Thread functions
long WINAPI MySTAThreadFunction(long lParam);
long WINAPI MyMTAThreadFunction(long lParam);

IHelloDotNetPtr spHelloNET = NULL;	

// Interface pointer to the stream that contains
// marshalled interface
IStream* g_pStream1 = NULL;
IStream* g_pStream2 = NULL;

int main(int argc, char* argv[])
{
	
	// Declarations
	HANDLE hThreadSTA = NULL;
	HANDLE hThreadMTA = NULL;
	DWORD dwThreadIDSTA = 0;
	DWORD dwThreadIDMTA = 0;
	HRESULT hr = S_OK;

	// Make the primary thread enter an STA
	::CoInitialize(NULL);

	// Log the thread id 
	cout << "The Thread ID of the primary STA thread is : " 
		<< ::GetCurrentThreadId() << endl;
		
	try
	{
		// Create the .NET object via the COM Interop
		hr = spHelloNET.CreateInstance(__uuidof(HelloDotNet));
		if(S_OK != hr) {
			
			cout << "Error code returned was: " << hr;
			return 0;
		}

		cout << "From .NET when called from the primary STA Thread : " 
			 << spHelloNET->GetThreadID() << endl;


	}/* end try */
	catch(_com_error& e)
	{
		cout <<  e.ErrorMessage();
		return 0;

	}/* end catch */


	// Marshal the interface pointer to a stream so that the
	// worker threads can get back a unmarshalled reference from it.
	hr = CoMarshalInterThreadInterfaceInStream(_uuidof(IHelloDotNet),
										 spHelloNET,
										 &g_pStream1);

	hr = CoMarshalInterThreadInterfaceInStream(_uuidof(IHelloDotNet),
										 spHelloNET,
										 &g_pStream2);


	// Create a worker thread that enters an STA
	hThreadSTA = CreateThread(NULL,0,
					(LPTHREAD_START_ROUTINE)MySTAThreadFunction,
					NULL,0 ,&dwThreadIDSTA);

	// Log the thread id 
	cout << "The Thread ID of the STA based Worker thread is : " 
		 << dwThreadIDSTA << endl;
	

	// Create a worker thread that enters an MTA
	hThreadMTA = CreateThread(NULL,0,
					(LPTHREAD_START_ROUTINE)MyMTAThreadFunction,
					NULL,0,&dwThreadIDMTA);

	// Log the thread id 
	cout << "The Thread ID of the MTA based Worker thread is : " 
		 << dwThreadIDMTA << endl;

	
	// Wait for both the worker threads to complete
	// their stuff
	::WaitForSingleObject(hThreadSTA,INFINITE);
	::WaitForSingleObject(hThreadMTA,INFINITE);
	
	// Return the status
	return 0;

}


/*
 * Worker Thread Function that enters an STA Apartment
 */
long WINAPI MySTAThreadFunction(long lParam)
{
	
	// Enter an STA
	::CoInitializeEx(NULL,COINIT_APARTMENTTHREADED);

	// Invoke the method on the raw interface pointer
 	cout << "From .NET when called from the STA Worker Thread (Direct Access) : " 
		 << spHelloNET->GetThreadID() << endl;
	

	// Unmarshal the interface pointer from the stream
	IHelloDotNetPtr spHello = NULL;
	HRESULT hr = CoGetInterfaceAndReleaseStream(g_pStream1,
					__uuidof(IHelloDotNet),
					(void **)&spHello);

	if(S_OK == hr)
	{

		cout << "From .NET when called from the STA Worker Thread (Marshalled) : " 
			<< spHello->GetThreadID() << endl;	
	}


	// Exit from the thread
	return 0;

}

/*
 * Worker Thread Function that enters an MTA Apartment
 */
long WINAPI MyMTAThreadFunction(long lParam)
{
	
	// Enter an MTA
	::CoInitializeEx(NULL,COINIT_MULTITHREADED);
	
	// Invoke the method on the raw interface pointer
	cout << "From .NET when called from the MTA Worker Thread (Direct Access) : " 
			<< spHelloNET->GetThreadID() << endl;

	
	// Unmarshal the interface pointer from the stream
	IHelloDotNetPtr spHello = NULL;
	HRESULT hr = CoGetInterfaceAndReleaseStream(g_pStream2,
					__uuidof(IHelloDotNet),(void **)&spHello);
	if(S_OK == hr)
	{
		cout << "From .NET when called from the MTA Worker Thread (Marshalled) : " 
			<< spHello->GetThreadID() << endl;	
	}

	// Exit from the thread
	return 0;
}
