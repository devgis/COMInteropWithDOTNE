using System;
using IceCreamMenuMetadata;

public class IceCreamMenuClient
{
    public static void Main(String[] args)
    {
        // Create an instance of the Collection class
        IceCreamMenu menu = new IceCreamMenu();

        // Add a few more flavors to the Menu
        menu.AddFlavortoMenu("Chocolate Chip");
        menu.AddFlavortoMenu("Blueberry");
		
        // Use the foreach to iterate through the elements in the
        // collection since the IEnumXXXX in the COM world is 
        // mapped into an IEnumerator in the .NET World
        foreach(Object objFlavor in menu)
        {
           System.Console.WriteLine("{0}",objFlavor);
        }

   }/* end Main */

}/* end class IceCreamMenuClient */
