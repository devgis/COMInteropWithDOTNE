using System;
using MyFlyerMetadata;

// Inherit from the metadata type representing
// the unmanaged COM component
// Use the COM Component's implementation 
// of TakeOff  & Fly (Use base class implementation)
public class Bird : Flyer 
{

}/* end class Bird */

// Inherit from the metadata type representing
// the unmanaged COM component
// Override the COM object's method implementations in our
// derived managed-class.
// (Also call base class implementation when necessary)
public class Airplane : Flyer
{

       // Override the COM Component's Flyer::TakeOff implementation
       // with our own implementation
       public override String TakeOff() 
       {
	return "Airplane::TakeOff - This is .NET taking off";
       }


       // Override the COM Component's Flyer::Fly implementation
       // with our own implementation
       public override String Fly() 
       {
	// Can call the base class' implementation too if you
	// wish to.
	System.Console.WriteLine(base.Fly());

	return "Airplane::Fly - This is .NET in the skies";
        }

}/* end class Airplane */

// Contains an instance of the metadata type representing
// the unmanaged COM Component
public class HangGlider
{
	private Flyer flyer = new Flyer();
	
	// Forward the call to the contained class' implementation
	public String TakeOff() 
	{
		return flyer.TakeOff();
	}

	// Forward the call to the contained class' implementation
	public String Fly() 
	{
		// Do what you need to do before or after fowarding the 
		// call to flyer
		System.Console.WriteLine("In HangGlider::Fly - Before delegating to flyer.Fly");
		return flyer.Fly();
	}

}/* end class HangGlider */



public class FlightController
{
	public static void Main(String[] args)
	{
		Bird falcon = new Bird();
		System.Console.WriteLine("BIRD: CLEARED TO TAKE OFF");
		System.Console.WriteLine(falcon.TakeOff());
		System.Console.WriteLine(falcon.Fly());

		Airplane skyline = new Airplane();
		System.Console.WriteLine("AIRPLANE: CLEARED TO TAKE OFF");
		System.Console.WriteLine(skyline.TakeOff());
		System.Console.WriteLine(skyline.Fly());
		

		HangGlider glider = new HangGlider();
		System.Console.WriteLine("HANGGLIDER: CLEARED TO TAKEOFF");
		System.Console.WriteLine(glider.TakeOff());
		System.Console.WriteLine(glider.Fly());

	}/* end Main */

}/* end FlightController */

