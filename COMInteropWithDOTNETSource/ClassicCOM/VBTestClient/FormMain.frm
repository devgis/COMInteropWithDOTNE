VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "VB Test Client"
   ClientHeight    =   1275
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   3420
   LinkTopic       =   "Form1"
   ScaleHeight     =   1275
   ScaleWidth      =   3420
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton MyButton 
      Caption         =   "Display Temperature"
      Height          =   615
      Left            =   240
      TabIndex        =   0
      Top             =   240
      Width           =   2895
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub MyButton_Click()

On Error GoTo ErrHandler

' Create an instance of the temperature component
 Dim objTemperature As New TemperatureComponent

' This can be done as well
'Dim objTemperature As Object
'Set objTemperature = CreateObject("TemperatureComponent")

' Display the current temperature
objTemperature.DisplayCurrentTemperature

' Set the temperature property
objTemperature.Temperature = 60

' Display the current temperature after property mutation
objTemperature.DisplayCurrentTemperature


' Check the weather indications
If (objTemperature.GetWeatherIndications() = WeatherIndications_Sunny) Then
    MsgBox "Off to the beach"
Else
    MsgBox "Stay at home and watch Godzilla on TV"
End If

' Set the temperature property
' Make it throw an exception by setting the temperature
' to be out of bounds
objTemperature.Temperature = 212

' Display the current temperature after mutation
objTemperature.DisplayCurrentTemperature

Exit Sub

ErrHandler:
    MsgBox "Error Message : " & Err.Description, _
           vbOKOnly, "Error Code: " & CStr(Err.Number)

End Sub
