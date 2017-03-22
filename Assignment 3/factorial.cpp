#include <iostream>

using namespace std;

int main() {

 unsigned long long x = 1;
 int n;
  
 cout << "Enter a number: ";
 cin >> n;
 bool valid = cin.good();
  
 if (!valid) {
	 
	 cerr << "Error: Invalid Input. Program terminated.";
	 return 0;
 }
 
 else {
 char next = cin.get();
 bool endOfInt = ((next == ' ') || (next = '\n'));
 
	if (!(endOfInt)) {
	 
	 cerr << "Error: Invalid Input. Program terminated.";
	 return 0;
	 
	}

	 
 }
 
 if ((n > 20) || (n < 0)) {
	 
	 cerr << "Error: Invalid Input. Program Terminated.";
	 return 0;
 }
 
 for (int i = 0; i < n; i++) {
	 
	 x = x * (n - i);
	 
 }
 
 cout << "Its factorial is " << x << endl;

 
 return 0;
}