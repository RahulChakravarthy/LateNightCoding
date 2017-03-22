#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	
	int rotations;
	char text[8] = {'!', 'E', 'C', 'E', '1', '5', '0', '!'};
	char path[60];
	
	
	//takes input for number of rotations
	cout << "Please enter the amount of rotations: ";
	cin >> rotations;
	
	
		// for loop for number of rotations the text will undergo
		for (int repeat = 0; repeat < rotations; repeat++){
		
			//for loop that engages a shift from beginning to end of animation
			for (int i = 0; i < 60; i++) {
				
				//Initializes pathing to all spaces
				for (int j = 0; j < 60; j++) {
					
					path[j] = ' ';
				
				}
				
					//if statement that takes text array and copies it on to path array 
					if (i > 52) {
						
					//text at the end of array path
						for (int m = 0; m < 60 - i; m++) {

						path[i+m] = text[m];

						}

					//text at beginning of array path
						int p = 8 - (60 - i);
						for (int n = 0; n < 8 - (60 - i); n++) {

						path[n] = text[8-p];

						p--;
						}
					}
					
					//else the text just gets added inside the path array with the spacing dependent on i
					else {
						
						for (int k = 0; k < 8; k++) {
							path[k + i] = text[k];
						
							}
						
					}
					
					
			//prints the path along with anumation
			cout << "============================================================" << endl;
			cout << path << endl;
			cout << "============================================================" << endl;
					
			for (long long autism = 0; autism < 412069; autism++) {
						
				autism += 1;
			}
					
					
			system ("cls");
					
					
					
					
		}
				
	}
	
		//Creates array with message on screen fixed
		for (int j = 0; j < 60; j++) {				
		path[j] = ' ';			
		}
					
		for (int o = 0; o < 8; o++) {
		path[o] = text[o];
		}

		cout << "============================================================" << endl;
		cout << path << endl;
		cout << "============================================================" << endl;
				
					
					return 0;
			}