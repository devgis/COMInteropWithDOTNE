VERSION 1.0 CLASS
BEGIN
  MultiUse = -1  'True
  Persistable = 0  'NotPersistable
  DataBindingBehavior = 0  'vbNone
  DataSourceBehavior  = 0  'vbNone
  MTSTransactionMode  = 0  'NotAnMTSObject
END
Attribute VB_Name = "IceCreamMenu"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = True
Attribute VB_PredeclaredId = False
Attribute VB_Exposed = True
Option Explicit
Private mIceCreamFlavors As Collection

Private Sub Class_Initialize()
    Set mIceCreamFlavors = New Collection
    mIceCreamFlavors.Add "Chocolate Almond Fudge"
    mIceCreamFlavors.Add "Peach Melba"
    mIceCreamFlavors.Add "Black Currant"
    mIceCreamFlavors.Add "StrawBerry"
    mIceCreamFlavors.Add "Chocolate Almond Fudge"
    mIceCreamFlavors.Add "Mint Chocolate Chip"

End Sub

Public Function Count() As Integer
Attribute Count.VB_Description = "Gets the number of elements in a collection"
    Count = mIceCreamFlavors.Count
End Function

Public Function Item(varIndex As Variant) As String
Attribute Item.VB_Description = "Gets the element at the specified index"
    Item = mIceCreamFlavors(varIndex)
End Function
Public Function NewEnum() As IEnumVARIANT
Attribute NewEnum.VB_Description = "Provides the enumerator for the collection"
Attribute NewEnum.VB_UserMemId = -4
Attribute NewEnum.VB_MemberFlags = "40"
    Set NewEnum = mIceCreamFlavors.[_NewEnum]
End Function

Public Function AddFlavortoMenu(strNewFlavor As String)
    mIceCreamFlavors.Add strNewFlavor
End Function



