/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string  your_name, instructor, food, adjective, color, animal = "";
    int number;
    
    cout << "Enter your name: ";
    getline(cin, your_name);
    cout << "Enter the name of your instructor: ";
    getline(cin, instructor);
    cout << "Enter a food: ";
    getline(cin, food);
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter an adjective: ";
    getline(cin, adjective);
    cout << "Enter an animal: ";
    getline(cin, animal);
    
    cout << "Enter a number between 100 and 120:  ";
    cin >> number;
    if (number < 100 || number > 120) {
        cout << "ERROR: Number out of range. Enter a valid number: ";
        cin >> number;
    }
    
    cout << "Dear Instructor " << instructor << ",\n\nI am sorry that I am unable to turn in my homework\nat this time. "
            "First, I ate a rotten " << food << ", which made me turn \n" << color << 
            " and extremely ill. I came down with a fever of " << number << ". Next, my\n" <<
            adjective << " pet " << animal << " must have smelled the remains of the \n" << food <<
            " on my homework, because he ate it. I am currently\nrewritting my "
            "homework and hope you will accept it late.\n\nSincerely,\n" << your_name << endl;
    

        

    return 0;
}