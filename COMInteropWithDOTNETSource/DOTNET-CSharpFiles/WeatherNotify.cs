using System;
using System.Runtime.InteropServices;
using System.Runtime.CompilerServices;
using System.Reflection;
using System.Diagnostics;

// Outgoing Event Interface which the Sink implements. We'll
// use a dispinterface here so that it remains friendly to
// scripting clients 
[InterfaceType(ComInterfaceType.InterfaceIsIDispatch)]
public interface ITornadoWatchEvents 
{
    void OnTornadoWarning(int nWindSpeed);

}/* end interface ITornadoWatchEvents */

// Explicit incoming interface containing the methods
// being exposed to COM aware clients
public interface IWeatherNotify {

    int WindSpeed { get; set; }

}/* end interface IWeatherNotify */

// Delegate representing the OnTornadoWarning method of the outgoing event interface
public delegate void TornadoWarningDelegate(int nWindSpeed);


[ 
  ComSourceInterfaces("ITornadoWatchEvents"),
  ClassInterface(ClassInterfaceType.None)
]
public class WeatherNotify : IWeatherNotify
{
	// Indicates Windspeed in Miles Per Hour 
	private int m_nWindSpeed = 20;

	// Define an event associated with the TornadoWarningDelegate 
	public event TornadoWarningDelegate OnTornadoWarning;
	
	// Constructor
	public WeatherNotify() {
	}

	public int WindSpeed
	{
	      get {

	         // Return the current Wind speed 
                       return m_nWindSpeed;
                    }
	
	      set {

	          // Set the WindSpeed to the new value
                        m_nWindSpeed = value;
			
	          // Check if the Wind Speed warrants an event notification 
                        if(value >= 300) {

 		  try  {

		       // Check if the delegate instance for the event exists
		       if(null != OnTornadoWarning) {
				
		             // Twister on the loose. Run for cover !!!. 
		             // Fire the event to all the unmanaged sink handlers 
		             // that have registered for this event.
		            OnTornadoWarning(m_nWindSpeed);
			
		            OnTornadoWarning.Target.GetType().InvokeMember( "OnTornadoWarning",  BindingFlags.InvokeMethod, 
								      null,  OnTornadoWarning.Target, 
								      new object [] {m_nWindSpeed} );


		          } /* end if */

                               }/* end try */
		   catch(Exception ex) {

		       Trace.WriteLine(ex.Message);
                               }/* end catch */
				
	            }/* end if */

	      }/* end set */

         }/* End WindSpeed Property Accessors */

}/* end class WeatherNotify */

