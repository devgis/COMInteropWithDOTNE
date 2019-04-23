tlbimp AirlineInformation.tlb /out:AirlineMetadata.dll

csc /target:exe /r:AirlineMetadata.dll /out:AirlineClient.exe AirlineClient.cs

tlbimp AirlineNotify.tlb /out:AirlineNotifyMetadata.dll

csc /target:winexe /r:System.dll,System.Windows.Forms.dll,System.Drawing.dll,AirlineNotifyMetadata.dll  /out:AirlineNotifyClient.exe  AirlineNotifyForm.cs

csc /target:winexe /r:System.dll,System.Windows.Forms.dll,System.Drawing.dll /out:DelegateTest.exe DelegateTest.cs

csc /target:exe /out:HelloWorldDelegate.exe HelloWorld.cs

tlbimp IceCreamParlor.tlb /out:IceCreamMenuMetadata.dll

csc /target:exe /r:IceCreamMenuMetadata.dll  /out:IceCreamMenuClient.exe IceCreamMenuClient.cs

csc /target:exe /out:SevenDwarfs.exe SevenDwarfs.cs

tlbimp MyFlyer.tlb /out:MyFlyerMetadata.dll
 
csc /target:exe /out:FlightClient.exe /r:MyFlyerMetadata.dll FlightClient.cs

csc /target:library /out:Directional.dll DirectionalTest.cs

TlbExp Directional.dll /out:Directional.tlb

csc /target:library /r:System.Windows.Forms.dll /out:Temperature.dll TemperatureComponent.cs

regasm Temperature.dll /tlb:Temperature.tlb 

csc /target:library /r:System.dll  /out:WeatherNotify.dll WeatherNotify.cs

regasm WeatherNotify.dll /tlb:WeatherNotify.tlb

csc /target:library /out:HelloDotNet.dll HelloDotNet.cs

regasm HelloDotNet.dll /tlb:HelloDotNet.tlb

pause
 

