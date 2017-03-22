#include <iostream>
#include <climits>

using namespace std;
//converts inputted strings (which are actually numbers) into data type Integer
int convertToIntArray(int argc, char* argv[], int intArray[]) {
	//checks to see if maximum or minimum arguments is reached
	if (argc > 21) {
		cerr << "Error: Too many arguments";
	 return -21;
	}
	if (argc == 1) {
		cerr << "Error: No Arguments inputted";
	 return -1;
	}

	// For loop that goes through each value of argv input
	for (int k = 1; k < argc; k++) {
		bool minus;
		int digit = 0;
		long a = 0;
		//Seeing if there is a minus sign
		argv[k][digit] == '-'? minus = true : minus = false;

		if (minus) {
			digit++;
		}
		//Loop to recreate number in integer data type
		while (argv[k][digit] != '\0') {
			//check above is to see if the current digit is a null (end of number)
			if (argv[k][digit] >= 48 && argv[k][digit] <= 57) {
				//Identifies which number this digit is
				a = (a*10) + (argv[k][digit] - 48);
				digit++;
				//increment such that it will check the next number in the string
			}
			//Error checking to see if other characters are in the string
			else {
				cerr << "Error: non-integer detected at number " << k << endl;
				return -k;
			}
		}
		//Error checking for size of integer
		if (a > INT_MAX) {
			cerr << "Error: Integer has reached max size";
			return INT_MIN;

		}
		//Adding the -sign to the number if there was one orgiginally
		if (minus) {
			a *= -1;
		}
		else {
			a;
		}
		
		intArray[k-1] = a;
	}
	return 0;
}

int findMax(int intArray[], int NumElements) {
	//Function to find the max number using bubble sort
	for (int a = 0; a < NumElements; a++) {
		for (int b = 1; b < NumElements; b++) {
			if (intArray[b-1] > intArray[b]) {

				int temp = intArray[b-1];
				intArray[b-1] = intArray[b];
				intArray[b] = temp;

			}
		}
	}

	int maxnumber = intArray[NumElements - 1];
	return maxnumber;
}

int findMin(int intArray[], int NumElements) {
	// Function to find min number uses bubble sort
	for (int a = 0; a < NumElements; a++) {
		for (int b = 1; b < NumElements; b++) {
			if (intArray[b-1] > intArray[b]) {

				int temp = intArray[b-1];
				intArray[b-1] = intArray[b];
				intArray[b] = temp;
			}
		}
	}

	int minnumber = intArray[0];
	return minnumber;
	}

float Average(int intArray[], int NumElements) {
	//Function for finding average number;
	float sum = 0;
	for (int i = 0; i < NumElements; i++) {
		sum += intArray[i];
	}

	float average = sum / (NumElements);
	return average;
}

int main(int argc, char* argv[]) {

 int MainArray[argc - 1];
	if (convertToIntArray(argc, argv, MainArray) == 0) {

 	int maxNum = findMax(MainArray, argc-1);
 	int minNum = findMin(MainArray, argc-1);
 	float numAverage = Average(MainArray, argc-1);

	
	cout << "Maximum: " << maxNum << endl;
	cout << "Minimum: " << minNum << endl;
	cout << "Average: " << numAverage << endl;
	}
	return 0;
}

