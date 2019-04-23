using System;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.Reflection;

[assembly: AssemblyKeyFile("MyKeyPair.snk")]
[assembly: AssemblyDelaySign(false)]
[assembly: AssemblyVersion("1.0.0.0")]

public enum WeatherIndications 
{
        Sunny = 0,
        Cloudy,
        Rainy,
        Snowy
}


public interface ITemperature {

   float Temperature { get; set; }
   void DisplayCurrentTemperature(); 
   WeatherIndications GetWeatherIndications(); 
}

[ClassInterface(ClassInterfaceType.None)]
public class TemperatureComponent : ITemperature
{
	
	private float m_fTemperature = 0;

	public TemperatureComponent()
	{
	       m_fTemperature = 30.0f;
	}
	
	
	public float Temperature
	{
		get 
		{
			return m_fTemperature;

		}/* end get */
		
		set
		{
		      if((value < -30) || (value > 150))
		      {
		              TemperatureException excep = 
				new TemperatureException("Marlinspike has never experienced such extreme temperatures. " + 
			 			             "Please recalibrate your thermometer");

		 	throw excep;
		      }

       		      m_fTemperature = value;		

		}/* end set */

	}/* end get/set Temperature */

	
	public void DisplayCurrentTemperature() 
	{
	         String strTemp = "";
	         strTemp = String.Format("The current temperature at Marlinspike is : "  +
				"{0:####} degrees farenheit", m_fTemperature);
	         MessageBox.Show(strTemp,"Today's Temperature");

	}/* end DisplayCurrentTemperature */


	public WeatherIndications GetWeatherIndications() 
	{
	        if(m_fTemperature > 70)
	        {
		return WeatherIndications.Sunny;
	        }
	        else
	        {
		// Let's keep this simple and just return Cloudy
		return WeatherIndications.Cloudy;
	        }

	}/* end GetWeatherIndications */


}/* end class Temperature */


class TemperatureException : ApplicationException
{
      public TemperatureException(String message) : base(message)
      {
      }

}/* end class TemperatureException */

 