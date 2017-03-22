#include <iostream>

using namespace std;

int main() {

char input [100];
int start;
int end;
bool endofword = false;
int count = 0;

cout << "Please enter text without whitespace: ";
cin >> input;

cout << "Please enter a starting value for the text: ";
cin >> start;


bool validx = cin.good();
if (!validx) {
	
	cerr << "Error: Invalid Input";
		return 0;
}

if (validx) {
	char next = cin.get();
	bool endOfInt = ((next == ' ') || (next == '\n'));
		
		if (!endOfInt) {
			
			cerr << "Error: Invalid Input.";
			return 0;
			
		}
	
}


cin.clear();
cout << "Please enter ending value for the text: ";
cin >> end;

bool validy = cin.good();
if (!validy) {
	
	cerr << "Error: Invalid Input";
		return 0;
}

if (validy) {
	char next = cin.get();
	bool endOfInt = ((next == ' ') || (next == '\n'));
		
		if (!endOfInt) {
			
			cerr << "Error: Invalid Input";
			return 0;
			
		}
	
}
/*if ((start == 0) && (end == 0)) {
	cout << input;
	return 0;
	}
*/
if ((start < 0) || (end > 100)) {
	cerr << "Error. Invalid Entry";
	return 0;
}
	
if (start > end) {
	cerr << "Error: Invalid entry.";
	return 0;
}

while (!endofword) {
	
	if (input[count] != '\0') {
		count = ++count;
	
	}
	
	if (input[count] == '\0') {
		endofword = true;
	}
}
	
for (int i = end + 1; i < count; i++) {
	
	input[i] = ' ';
	

}

for (int o = 0; o < start; o++) {
	
	input[o] = ' ';
	
}

cout << "The extracted word is: " << input << endl;
return 0;

}