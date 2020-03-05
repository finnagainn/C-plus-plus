/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Kaffeein Bellamy            Feb 26, 2019 Restaurant BiLL
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float itemPrice;
    cout << "Enter meal price.    $";
    cin >> itemPrice;
    cout << "Meal Price: $" << itemPrice;
    cout << setprecision(3) << "\nTax $";
    cout << itemPrice * 0.0675 << endl;
    cout << "Tip $";
    cout << itemPrice * 0.15 << endl;
    cout << "\nYour total is $";
    cout << itemPrice + (itemPrice * 0.0675) + (itemPrice * 0.15);
    return 0;
}
