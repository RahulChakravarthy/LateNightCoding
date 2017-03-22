#include <iostream>

using namespace std;

int main() {

int nwall;
int wall;
int snake;
int distance;
int i = 0;
int o = 0;


cout << "Please enter the wall size: ";
cin >> nwall;

bool valid = cin.good();

if (!valid) {
	cout << "Error: Invalid entry";
	return 0;
}

else if (valid) {
	
	char next = cin.get();
	bool endofInt = (next == ' ') || (next == '\n');
	
		if (!endofInt) {
			cerr << "Error: Invalid entry";
			return 0;
		}



}


cin.clear();
cout << "Please enter the snake length: ";
cin >> snake;


if (!valid) {
	cout << "Error: Invalid entry";
	return 0;
}

else if (valid) {
	
	char next = cin.get();
	bool endofInt = (next == ' ') || (next == '\n');
	
		if (!endofInt) {
			cerr << "Error: Invalid entry";
			return 0;
			
		}

}


cin.clear();	
cout << "Please enter the distance from wall to snake: ";
cin >> distance;


if (!valid) {
	cout << "Error: Invalid entry";
}

else if (valid) {
	
	char next = cin.get();
	bool endofInt = (next == ' ') || (next == '\n');
	
		if (!endofInt) {
			cerr << "Error: Invalid entry";
			return 0;
		}
}


if ((nwall <= 0) || (snake < 0) || (distance < 0)) {
	cerr << "Error: Invalid Entry.";
	return 0;
}

if ((distance > nwall) || (snake > nwall) || ((snake + distance) > nwall)) {
	
	cerr << "Error. Invalid input";
	return 0;
}

wall = nwall - 1;
char array[wall];

for (o = 0; o < wall; o++) {
	
	array[o] = ' ';
	
}

array[0] = '|';
array[wall] = '|';

if (snake != 0) {
array[snake + distance] = 'O';

}
for (i = distance + 1; i < snake + distance; i++) {
	
	array[i] = '*';
}

cout << array << endl;


return 0;
}