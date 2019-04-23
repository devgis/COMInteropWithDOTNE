VERSION 5.00
Begin VB.Form WeatherStationForm 
   Caption         =   "Weather Station"
   ClientHeight    =   1695
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   3930
   LinkTopic       =   "Form1"
   ScaleHeight     =   1695
   ScaleWidth      =   3930
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton SetWindSpeedButton 
      Caption         =   "Set Wind Speed"
      Height          =   375
      Left            =   960
      TabIndex        =   3
      Top             =   600
      Width           =   1575
   End
   Begin VB.TextBox WindSpeed 
      Height          =   285
      Left            =   1470
      TabIndex        =   0
      Text            =   "20"
      Top             =   120
      Width           =   1095
   End
   Begin VB.Label LabelWarning 
      BackColor       =   &H8000000B&
      ForeColor       =   &H000000FF&
      Height          =   375
      Left            =   120
      TabIndex        =   4
      Top             =   1200
      Width           =   3615
   End
   Begin VB.Label Label2 
      Caption         =   "mph"
      Height          =   255
      Left            =   2790
      TabIndex        =   2
      Top             =   120
      Width           =   375
   End
   Begin VB.Label Label1 
      Caption         =   "Wind Speed  :"
      Height          =   255
      Left            =   150
      TabIndex        =   1
      Top             =   120
      Width           =   1095
   End
End
Attribute VB_Name = "WeatherStationForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim WithEvents objWeatherNotify As WeatherNotify.WeatherNotify
Attribute objWeatherNotify.VB_VarHelpID = -1

Private Sub Form_Load()
    ' Create an instance of the WeatherNotify Component
    Set objWeatherNotify = New WeatherNotify.WeatherNotify
End Sub

Private Sub objWeatherNotify2_OnTornadoWarning(ByVal nWindSpeed As Long)
    MsgBox "Howdy"
End Sub

Private Sub SetWindSpeedButton_Click()

    ' Clear the warning label
    Me.LabelWarning = ""
    
    ' Set the Windspeed property in the WeatherNotify component
    objWeatherNotify.WindSpeed = Me.WindSpeed
    
End Sub

Private Sub objWeatherNotify_OnTornadoWarning(ByVal nWindSpeed As Long)
    
    ' We've received a notification from the WeatherNotify Component
    ' that there could be a Tornado on the prowl
    Me.LabelWarning = "Tornado Warning: Current Wind Speeds : " & _
                    nWindSpeed & " mph"
    
End Sub
