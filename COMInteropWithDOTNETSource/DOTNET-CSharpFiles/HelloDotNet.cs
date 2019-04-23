   using System;
   using System.Runtime.InteropServices;
    
    public interface IHelloDotNet {

       String GetThreadID();

    }/* end interface IHelloDotNet */
   	
    [ClassInterface(ClassInterfaceType.None)]    
    public class HelloDotNet : IHelloDotNet
    {
        public HelloDotNet() {
        }

       public String GetThreadID() {

	return AppDomain.GetCurrentThreadId().ToString();
       }

   }/* end class HelloDotNet */
 
