#include <iostream>

using namespace std;

int main() {

int base;
int nbase;
int rows;
int k = 0;
int n = 0;
int z = 0;
int nspace = 0;

cout << "Please enter an odd size for the base of the triangle: ";
cin >> base;

bool valid = cin.good();

if (!valid) {
	cerr << "Error. Invalid entry.";
	return 0;
}

if (valid) {
	
	char next = cin.get();
	bool endOfInt = ((next == ' ') || (next == '\n'));
	
		if (!endOfInt) {
			
			cerr << "Error. Invalid entry";
			return 0;
		}
		
}

if (base % 2 != 1) {
	
	cerr << "Error. Even number detected";
	return 0;
}

nbase = base;

while (base > 0) {

	base -= 2;
	k++;
}

//creating inverted triangle rows
for (int p = k; p > 0; p--) {
	
	//creating space to line rows up
	for (nspace = 0; nspace < n; nspace++) {
		cout << " ";
	}
		
	
	//creating stars for the triangle
	for (int i = nbase - 1; i >= 0; i--) {
		
		cout << '*';
	
	}

	n += 1;
	nbase -= 2;
	cout << endl;
}
//creating triangle right side up

nbase += 4;

//creating loop for number of rows

for (int q = 0; q < k-1; q++) {
	
	//creating loop for spaces to line triangle up
	
	for (nspace = 0; nspace < n - 2; nspace++) {
		
		cout << " ";
	}
	
	//creating stars for the triangle
	
	for (z = nbase - 1; z >= 0; z--) {
		
		cout << '*';
		
	}
	n -= 1;
	nbase += 2;
	cout << endl;
	
}
return 0;
}