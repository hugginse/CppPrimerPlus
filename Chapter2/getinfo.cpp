// getinfo.cpp -- input and output

#include <iostream>
using namespace std;

int main()
{
    int carrots;

    cout << "How many carrots do U have?" << endl;
    cin >> carrots;     // C++ input
    cout << "Here are two more.";
    carrots = carrots + 2;
    // the next line cancatenates output
    cout << "Now you have " << carrots << " carrots." << endl;

    return 0;
}