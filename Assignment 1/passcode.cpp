#include <iostream>

using namespace std;

int main() 
{
char char1;
char char2;
char char3;


cout << "Enter a 3 character password with no spaces: ";
cin >> char1 >> char2 >> char3;


cout << "Your coresponding passcode in ascii is: " << char1 * 1000000 + char2 * 1000 + char3 << endl;

return 0;
}