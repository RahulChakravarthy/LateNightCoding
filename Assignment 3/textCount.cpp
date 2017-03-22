#include <iostream>

using namespace std;

int main(){

char input [100];
int wordcount = 0;
bool endOfword = false;

cout << "Enter text without whitespace: ";
cin >> input;



    while (!endOfword) {
	
	if (input[wordcount] != '\0') {
		
	
	wordcount = ++wordcount;

	
	}
	
	if (input[wordcount] == '\0'){
		
		endOfword = true;
	}
}

	if  (wordcount > 100) {
	
		cerr << "Error: Too many characters";
		return 0;
		
	}
		
	
	cout << "The length of the entered text is : " << wordcount << endl;
			


return 0;
}