// sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>    // or math.h

using namespace std;

int main()
{
    double area;
    cout << "Enter the floor arer, in aquare feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side 
         << " feet to the side." << endl;
    cout << "How fascinating!" << endl;

    return 0;
}