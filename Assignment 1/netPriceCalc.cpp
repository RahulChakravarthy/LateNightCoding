#include <iostream>
#include <iomanip>

using namespace std;

int main()

{
cout << setprecision(2) << fixed;

float Price;
float Discount;
float Tax;
float FinalDiscount;
float FinalPrice;


cout << "Enter the offer price of the item, the discount(%) and the rate of tax(%) (using spaces between values): ";
cin >> Price >> Discount >> Tax;


FinalDiscount = (Price - (Price * (Discount / 100)));
FinalPrice = FinalDiscount + (FinalDiscount * (Tax / 100));

cout << "The net price is: " << FinalPrice << endl;


return 0;

}