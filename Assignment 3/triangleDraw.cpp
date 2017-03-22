#include <iostream>

using namespace std;

int main() {

int base;
int nbase;
int rows;
int k = 0;
int n = 0;
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


for (int p = k; p > 0; p--) {
	
		
	for (nspace = 0; nspace < n; nspace++) {
		cout << " ";
	}
		
	
	
	for (int i = nbase - 1; i >= 0; i--) {
		
		cout << '*';
	
	}

	n += 1;
	nbase -= 2;
	cout << endl;
	}
	

return 0;
}