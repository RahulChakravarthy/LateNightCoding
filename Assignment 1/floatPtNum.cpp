#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
cout << setprecision(20) << fixed;
double A;
double B;
double C;

cout << "Please enter 2 intergers (seperated by a space): ";
cin >> A >> B;

C = A / B;


cout << "A divided B = " << C << endl;

return 0;
}
