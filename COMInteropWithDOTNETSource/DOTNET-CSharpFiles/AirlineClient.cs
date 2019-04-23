using System;
using System.Runtime.InteropServices;
using System.Reflection;
using AirlineMetadata;


interface IJunkInterface 
{

}

public class CAirlineClient
{

	public static void Main()
	{

		/*
		 * Early binding example
		 */

		String strAirline = "Air Scooby IC 5678";
		String strFoodJunkieAirline = "Air Jughead TX 1234";
		try
	   	{
 		             AirlineInfo objAirlineInfo;
			
			// Create a new AirlineInfo Object
			objAirlineInfo = new AirlineInfo();	

			// Display the output after calling the GetAirileTiming method
			System.Console.WriteLine("Details for Airline {0} --> {1}",
				strAirline,objAirlineInfo.GetAirlineTiming(strAirline)); 
			
			// This will throw us the 
			System.Console.WriteLine("Details for Airline {0} --> {1}",
				strFoodJunkieAirline,objAirlineInfo.GetAirlineTiming(strFoodJunkieAirline)); 

	    	}
		catch(COMException ex1COM)
		{
			System.Console.WriteLine("Oops an error occured !. Error Code is : {0}. Error message is : {1}",
					ex1COM.ErrorCode,ex1COM.Message);			  	
		}
		catch(Exception ex1)
		{
			System.Console.WriteLine("Oops !. An exception occured : {0} ",
				ex1.Message);			  	
		}

		
		/*
		 * QueryInterface Example
		 */
		try	
		{
			AirlineInfo objAirlineInfo = null;
			IAirportFacilitiesInfo objFacilitiesInfo = null;
			
			// Create a new AirlineInfo object	
			objAirlineInfo = new AirlineInfo();
		
			// Invoke the GetAirlineTiming method	
			String strDetails = objAirlineInfo.GetAirlineTiming(strAirline);	
			
				
    			// Check to see if the AirlineInfo object supports the 
			// IAirportFacilitiesInfo interface using C#'s 'is' operator

			// The class is always going to be of that type
			/*
			if(objAirlineInfo is IAirportFacilitiesInfo) 
			{
			*/			
				// Perform a cast to get the QI done
				objFacilitiesInfo = (IAirportFacilitiesInfo)objAirlineInfo;

        				// There's always more than one way to skin a cat
				// You could even perform the cast using C#'s 'as' operator
        				objFacilitiesInfo = objAirlineInfo as IAirportFacilitiesInfo;

				//Invoke a method on the IAirportFacilitiesInfo interface
				System.Console.WriteLine("{0}",objFacilitiesInfo.GetInternetCafeLocations());

			/*
			}
			*/
			
			// Let's check against an arbitrary interface type
			if(objAirlineInfo is IJunkInterface) 
			{
				System.Console.WriteLine("We should never get here ");
			}
			else
			{
				System.Console.WriteLine("I'm sorry I don't implement the IJunkInterface interface ");
			}

			// And now let's ask for some trouble and have the
			// interop throw us an invalid cast exception.
			IJunkInterface objJunk = null;
			objJunk = (IJunkInterface)objAirlineInfo;


		}/* end try */
		catch(InvalidCastException eCast)
		{	
			System.Console.WriteLine("Here comes trouble ... Error Message : {0}",eCast.Message);   

		}/* end catch */

		/*
		 * Late Binding Example
		 */
		try
		{

			object objAirlineLateBound;
			Type objTypeAirline;

			// Create an object array containing the input params
		    	object[] arrayInputParams= { "Air Scooby IC 5678" };
			
			//Get the type information from the progid
			objTypeAirline = Type.GetTypeFromProgID("AirlineInformation.AirlineInfo");
			
			// Here's how you use the COM CLSID to get the associated .NET System.Type
			// objTypeAirline = 	Type.GetTypeFromCLSID(new Guid("{F29EAEEE-D445-403B-B89E-C8C502B115D8}"));

			// Create an instance of the object
			objAirlineLateBound = Activator.CreateInstance(objTypeAirline);

			// Invoke the 'GetAirlineTiming' method
			String str = (String)objTypeAirline.InvokeMember("GetAirlineTiming",
					BindingFlags.Default | BindingFlags.InvokeMethod,
					null, objAirlineLateBound,
					  arrayInputParams);

			System.Console.WriteLine("Late Bound Call - Air Scooby Arrives at {0}",str);

			// Get the value of the 'LocalTimeAtOrlando' property
			String strTime = (String)objTypeAirline.InvokeMember("LocalTimeAtOrlando", 
					BindingFlags.Default | BindingFlags.GetProperty, 
					null, objAirlineLateBound,
					new object [] {});

		             Console.WriteLine ("Late Bound Call - Local Time at Orlando,Florida is: {0}", strTime);
        

		}/* end try */
		catch(COMException e)
		{
			System.Console.WriteLine("Error Code : {0} , Error Message : {1}",e.ErrorCode,e.Message);			  	

	              }/* end catch */


        }/* end  Main */

}/* end class */