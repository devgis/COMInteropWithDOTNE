VERSION 5.00
Begin VB.Form MainForm 
   Caption         =   "John Doe International Airport - Control Tower"
   ClientHeight    =   2040
   ClientLeft      =   60
   ClientTop       =   345
   ClientWidth     =   5160
   LinkTopic       =   "Form1"
   ScaleHeight     =   2040
   ScaleWidth      =   5160
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox ArrivalTerminal 
      Height          =   375
      Left            =   2760
      TabIndex        =   4
      Top             =   720
      Width           =   2175
   End
   Begin VB.TextBox AirlineName 
      Height          =   375
      Left            =   2760
      TabIndex        =   1
      Top             =   120
      Width           =   2175
   End
   Begin VB.CommandButton AirlineArrived 
      Caption         =   "Add Airline Arrived Details"
      Height          =   495
      Left            =   1320
      TabIndex        =   0
      Top             =   1320
      Width           =   2415
   End
   Begin VB.Label Label2 
      Caption         =   "Terminal/Gate where Airline has Arrived :"
      Height          =   495
      Left            =   120
      TabIndex        =   3
      Top             =   600
      Width           =   2415
   End
   Begin VB.Label Label1 
      Caption         =   "Airline Name :"
      Height          =   375
      Left            =   120
      TabIndex        =   2
      Top             =   120
      Width           =   2415
   End
End
Attribute VB_Name = "MainForm"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim AirlinePager As New AIRLINENOTIFYLib.AirlineArrivalPager


Private Sub AirlineArrived_Click()
    AirlinePager.AddArrivalDetails Me.AirlineName, Me.ArrivalTerminal
End Sub


