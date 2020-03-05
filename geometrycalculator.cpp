//Kaffeein Bellamy Geometry Calculator
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    int area;
    float rectangle_area, width, length, height, radius, triangle_area, circle_area, base;
    const float pi = 3.14159;
    char choice;


    cout << "Geometry Calculator" << endl;
    cout << "\t 1. Calculate the Area of  Circle" << endl;
    cout << "\t 2. Calculate the Area of a Rectangle" << endl;
    cout << "\t 3. Calculate the Area of a Triangle" << endl;
    cout << "\t 4. Quit" << endl;


    while (1 == 1) {
        cout << "Enter a number from above : ";
        cin >> area;


        switch (area) {
            case 1:

                cout << "Enter circle radius.\n";
                cin >> radius;
                circle_area = pi * pow(radius, 2);
                cout << "Area = " << circle_area << " square units" << endl;
                break;


            case 2:

                cout << "Enter rectangle width.\n" << endl;
                cin >> width;
                cout << "Enter rectangle length.\n" << endl;
                cin >> length;
                rectangle_area = width * length;
                cout << "Area = " << rectangle_area << " square units" << endl;
                break;


            case 3:

                cout << "Enter triangle base. \n" << endl;
                cin >> base;
                cout << "Enter triangle height. \n" << endl;
                cin >> height;
                triangle_area = base * height / 2;
                cout << "Area = " << triangle_area << " square units" << endl;
                break;


            case 4:
                cout << "Goodbye" << endl;
                return 0;
        }
    }
}

