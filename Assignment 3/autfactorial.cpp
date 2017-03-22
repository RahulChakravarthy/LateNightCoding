#include <iostream>

using namespace std;

long long factorial(long long n){
	if(n <= 1){
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
	
}

int main() {

	cout << factorial(50);


	return 0;
}

