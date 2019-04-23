using System;
using System.Collections;

public class SevenDwarfs : IEnumerable , IEnumerator
{
	private int nCurrentPos = -1;
	private string[] strArrayDwarfs =  new String[7] {"Doc", "Dopey", "Happy", "Grumpy",
									                  "Sleepy", "Sneezy" , "Bashful"};

    SevenDwarfs() {}
	
	// Method : IEnumerable.GetEnumerator
	// Return an appropriate Enumerator for the collection
	public IEnumerator GetEnumerator() 
	{
		return (IEnumerator)this;
	}
	
	// Method : IEnumerator.MoveNext
	// Move the enumerator to the next element in the collection
	// and return boolean status whether we still have elements to 
	// enumerate
	public bool MoveNext() 
	{
		if(nCurrentPos < strArrayDwarfs.Length - 1)
		{
		   nCurrentPos++;
		   return true;
		}
		else
		{
		   return false;
		}
	}
	
	// Method : IEnumerator.Reset
	// Reset the enumerator to the beginning of the collection
	public void Reset()
	{
		nCurrentPos = -1;
	}

	// Method : IEnumerator.Current
	// Return the element at the current enumerator position
	public object Current
	{
		get
		{
		  return strArrayDwarfs[nCurrentPos];
		}
	}

	public static void Main(String[] args)
	{
		// Create an instance of the SevenDwarfs object
		SevenDwarfs SnowWhitesDwarfs = new SevenDwarfs();

		// Enumerate through the Collection
		foreach(string dwarf in SnowWhitesDwarfs)
		{
           System.Console.WriteLine("{0}",dwarf);
		}

	}/* end Main */
    
}/* end class SevenDwarfs */
