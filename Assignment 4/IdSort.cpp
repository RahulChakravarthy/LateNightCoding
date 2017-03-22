#include <iostream>

using namespace std;

int main() {
	
	int input[5];
	int input6;
	int Another[6];
	int holder;
	bool sorted = false;
	int count = 0;
	int count2 = 0;
	
	
	cout << "Enter 5 ID: ";
	cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4];
	
	bool valid = cin.good();
	
	if (!valid) {
		
		cerr << "Error. Invalid input!";
		return 0;
	}
	
	
	if ((input[0] < 10000000) ||(input[1] < 10000000) || (input[2] < 10000000) || (input[3] < 10000000) || (input[4] <= 10000000)) {
		
		cerr << "Error. Invalid Input. First digit 0 detected";
		return 0;
	}
	
for (int k = 0; k < 4; k++) {
	
	for (int i = 0; i < 4; i++) {
		
		
		if (input[i + 1] > input[i]) {
			
			holder = input[i];
			input[i] = input[i + 1];
			input[i + 1] = holder;
			
			count = count + 1;
		}
	}
}
	
	cout << "Sorted ID: " << input[0] << " " << input[1] << " " << input[2] << " " << input[3] << " " << input[4] << endl;
	cout << "Swap counter: " << count << endl;
	cout << "Enter another input: ";
	
	// Process new value in sort
	cin >> input6;
	
	if (!valid) {
		
		cerr << "Error. Invalid input!";
	
	}
	
	if ((input6 == input[0]) || (input6 == input[1]) || (input6 == input[2]) || (input6 == input[3]) || (input6 == input[4])) {
		
		cerr << "Error: This ID exists";
		return 0;
	}
	
	Another[0] = input6;
	
	for (int j = 1; j <= 5; j++) {
		
		Another[j] = input[j - 1];
		
	}
	
	for (int l = 0; l < 5; l++) {
		
		if (Another[l + 1] > Another[l]) {
			
			holder = Another[l];
			Another[l] = Another[l + 1];
			Another[l + 1] = holder;
			
			count2 = count2 + 1;
		}
		
	}
	
	cout << "The value " << input6 << " is in position " << count2 << endl;
	
	return 0;
	
}