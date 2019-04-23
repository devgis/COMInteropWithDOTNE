using System;

public interface IMyInterface
{
      String HelloWorld();
      String HelloWorld(String strInput);
      String HelloWorld(String strInput,ref String strAnotherInOut);
      String HelloWorld1(String strInput,out String strAnotherOut);
}

public class Directional  : IMyInterface
{
	public Directional() 
	{
	}

	public String HelloWorld()
	{
	     return "Hello World";
	}
	
              public String HelloWorld(String strInput)
	{
	   return strInput + " Hello World";
	}

	
	public String HelloWorld(String strInput,ref String strAnotherInOut)
	{
	        strAnotherInOut = "Hello In Out";	
	        return "";
	}

	public String HelloWorld1(String strInput,out String strAnotherOut)
	{
	      strAnotherOut = "Hello Out";
	      return "";
	}

	public static void Main(String[] args) 
	{
		
	}
	
}