using System;

delegate string SayGoodMorning();

public class HelloWorld
{

   public string SpeakEnglish() {
	return "Good Morning";
   }

   public string SpeakFrench() {
        return "Bonjour";
   }

   public static void Main(String[] args) {

	HelloWorld obj = new HelloWorld();

	// Associate the delegate with a method reference
	SayGoodMorning english = new SayGoodMorning(obj.SpeakEnglish);
	SayGoodMorning french = new SayGoodMorning(obj.SpeakFrench);

	// Prints the following :
	// Good Morning
              // Bonjour
	System.Console.WriteLine(english());
	System.Console.WriteLine(french());

  }/* end Main */


}/* end class */

