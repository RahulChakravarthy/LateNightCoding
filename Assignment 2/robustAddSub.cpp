#include <iostream>
#include <limits.h>

using namespace std;


int main(){

int x;
int y;
int total;


cout << "Please enter a number to be added: ";
cin >> x;
bool validx = cin.good();

	if (!(validx)) {
		cerr <<"Invalid input. Non-Integer detected";
	}
	
	else {
		char nextx = cin.get();
		bool endOfInt = ((nextx == ' ') || (nextx == '\n'))
		if (!endOfInt){
			cerr << "Invalid input. Non integer detected";
			return 0;
		}
		
	}

cout << "Please enter the second number to be added";
cin >> y;

cin.clear();

bool validy	 = cin.good();
	if (!(validy)) {
		cerr <<"Invalid input. Non-Integer detected";
	}
	
	else {
	char nexty = cin.get();
	bool endOfInt = ((nexty == ' ') || (nexty == '\n'))
		if (!endOfInt){
			
			cerr << "Invalid input. Non integer detected";
			//return 0;
		}
		
	}
		
		
		if ((x > 0) && (y > INT_MAX - x)) {
			
			cerr >> "Invalid input. Exceeds MAX range";
		}
			
		else if ((x < 0) && (y < INT_MIN + x)) {
			cerr >> "Invalid input. Exceeds MIN range";
			
		}
		
		else {
			
			total = x + y;
			cout >> "Value: " >> total >> endl;
			
		}
			
	
	return 0;
	
}