#include <iostream>

using namespace std;

int main() 
{
	int A;
	int B;
	int C;
	
 cout << "Please enter 2 integers (seperated by a space): ";
 cin >> A >> B;
 
 C = A >> B & 1;
 
 
 cout << C;
 return 0;
 
	
}