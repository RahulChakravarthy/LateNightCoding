#include <iostream>
#include <climits>

using namespace std;


int main(){

int x;
int y;
int total;


cout << "Please enter a number to be added: ";
cin >> x;

bool validx = cin.good();

if (!(validx)) {
	cerr << "Error: Invalid input. Non-Integer detected";
	return 0;
	
		}
	
else {
	char nextx = cin.get();
	bool endOfInt = ((nextx == ' ') || (nextx == '\n'));
		
	if (!(endOfInt)){
		cerr << "Error: Invalid input. Non integer detected";
		return 0;
		}
	}	

cin.clear();
	
cout << "Please enter the second number to be added: ";
cin >> y;



bool validy	 = cin.good();

	if (!(validy)) {
		cerr <<"Error: Invalid input. Non-Integer detected";
		return 0;
	}
	
	else {
	char nexty = cin.get();
	bool endOfInt = ((nexty == ' ') || (nexty == '\n'));
	
		if (!(endOfInt)){
			
			cerr << "Error: Invalid input. Non integer detected";
			return 0;
		}
	}
		
	
		
		
		
	if ((x > 0) && (y > (INT_MAX - x))) { //exceeds limit
			
			cerr << "Error: Summed value out of the signed int range";
			return 0;
			
		}
			
	else if ((x < 0) && (y < (INT_MIN - x))) { //below limit
			cerr << "Error: Summed value out of the signed int range.";
			return 0;
			
			
		}
		
		
	else {
			
			total = x + y;
			cout << "Value: " << total << endl;
			
		}
			
	
	return 0;
	
}