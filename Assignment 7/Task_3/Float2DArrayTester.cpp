#include <iostream> 
#include <fstream> 

#include "Float2DArray.h." 

using namespace std;


int main()
{
	Float2DArray f;
	Float2DArray g(3,5);
	
	g(1,2) = 4.3;
	f = g;
	Float2DArray* k;
	{
		Float2DArray h(2,2);
		h(1,1) = 5.6;
		f = h;
		k = &h;
	}
	cout << "(*k)(1,1) returns: " << (*k)(1,1) << endl;
	cout << "f(1,1) returns: " << f(1,1) << endl << endl;
	
	
	Float2DArray x(2,2);
	x(1,1) = 9.4;
	f = x;
	k = &x;
	cout << "(*k)(1,1) returns: " << (*k)(1,1) << endl;
	cout << "f(1,1) returns: " << f(1,1) << endl;
	
	/********************************************************************
		test non-class functions
	********************************************************************/
	char* filename = "LakeTahoeDEM.csv";
	Float2DArray lake(1,1);
	
	cout << "\nRead ";
	if ( readTahoeData(filename, lake) )
		cout << "success!\n";
	else
		cout << "failure!\n";
	
	cout << fixed << setprecision(2);
	
	cout << "\nBefore cleandata():\n";
	
	cout << "Lake area = " << area(lake) << " square meters.\n";
	     
	cout << "Lake volume = " << volume(lake) << " cubic meters.\n";
	
	//test the cleanData() function   
	cleanData(lake);
	
	cout << "\nAfter cleandata():\n";
	
	cout << "Lake area = " << area(lake) << " square meters.\n";
	     
	cout << "Lake volume = " << volume(lake) << " cubic meters.\n";
	  
	return 0;
}

/*
Sample output:

Array bounds error: (1,1)
Address of x in bad access: 0x535b60
(*k)(1,1) returns: nan
f(1,1) returns: 5.6

(*k)(1,1) returns: 9.4
f(1,1) returns: 9.4

Read success!

Before cleandata():
Lake area = ??? square meters.
Lake volume = ??? cubic meters.

After cleandata():
Lake area = ??? square meters.
Lake volume = ??? cubic meters.

--------------------------------
Process exited after 0.3847 seconds with return value 0
Press any key to continue . . .
*/
