/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int a = 5, b = 12;
   double x = 3.4, z = 9.1;
   cout << "3.14 Answers\n";
   cout << "----------------------------------\n";
   cout << "A)   " << b / a << endl; 
   cout << "B)   " << x * a << endl;
   cout << "C)   " << static_cast<double>(b / a) << endl;
   cout << "D)   " << static_cast<double>(b) / a << endl;
   cout << "E)   " << b / static_cast<double>(a) << endl;
   cout << "F)   " << static_cast<double>(b) / static_cast<double>(a) << endl;
   cout << "G)   " << b / static_cast<int>(x) << endl;
   cout << "H)   " << static_cast<int>(x) * static_cast<int>(z) << endl;
   cout << "I)   " <<static_cast<int>(x * z) << endl;
   cout << "J)   " << static_cast<double>(static_cast<int>(x) * static_cast<int>(z)) << endl;
   cout << "----------------------------------\n";
   cout << "             \n";
   
   char letter = 'B';
   cout << "3.15 Answers\n";
   cout << "----------------------------------\n";
   cout << "The ASCII values of uppercase letters are "
        << static_cast<int>('A') << " - "
        << static_cast<int>('Z') << endl;
   cout << "The ASCII values of lowercase letters are "
        << static_cast<int>('a') << " - "
        << static_cast<int>('z') << endl;
   cout << "Enter a letter to get ASCII value:  ";
   cout << "The ASCII code for " << letter << " is " << static_cast<int>(letter) << endl;
   cout << "----------------------------------\n";
   cout << "             \n";
   
   int integer1 = 19, integer2 = 2;
   double doubleVal;
   cout << "3.16 Answers\n";
   cout << "----------------------------------\n";
   doubleVal = integer1 / integer2;
   cout << doubleVal << endl;
   doubleVal = static_cast<double>(integer1) / integer2;
   cout << doubleVal << endl;
   doubleVal = static_cast<double>(integer1 / integer2);
   cout << doubleVal << endl;
   
   

    return 0;
}
