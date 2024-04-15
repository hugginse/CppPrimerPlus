// carrots.cpp -- food processing program
// use and displays a variable

#include <iostream>
using namespace std;

int main()
{
    int carrots;        // 声明变量类型
    
    carrots = 25;       // 给变量赋值
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;      // 修改变量值
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;

    return 0;
}