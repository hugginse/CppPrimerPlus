/*// exercise 1 :编写要给C++程序，它显示您的姓名和地址。
#include <iostream>
using namespace std;

int main()
{
    cout << "My name is Huggins, and My address is GZHU." << endl;
    return 0;
}*/


/*// exercise 2 : 编写一个C++程序，它要求用户输入一个以long为单位的距离，然后将它转换为码（一long等于2200码）。
#include <iostream>
using namespace std;

int long2ma(int);

int main()
{
    int longs;
    cout << "Please enter a distance number: ";
    cin >> longs;
    int mas = long2ma(longs);
    cout << "Distance = " << mas << " Mas" << endl;
    return 0;
}

int long2ma(int n)
{
    return n * 220;
}*/


/*// exercise 3 : 编写一个C++程序，它使用3个用户自定义函数（包括main()），并生成下面的输出：
// Three blind mice
// Three blind mice
// See how they run
// See how they run
// 其中一个函数要调用两次，该函数生成前两行；另一个函数也被调用两次，并生成其余的输出
#include <iostream>
using namespace std;

void func1();
void func2();

int main()
{
    func1();
    func1();
    func2();
    func2();
    return 0;
}

void func1()
{
    cout << "Three blind mice" << endl;
}

void func2()
{
    cout << "See how they run" << endl;
}*/


/*// exercise 4 : 编写一个程序，让用户输入其年龄，然后显示该年龄包含多少个月， 如下所示：
// Enter your age: 29
#include <iostream>
using namespace std;

int years2month(int age);

int main()
{
    int age;
    cout << "Enter yout age:";
    cin >> age;
    cout << "Your age has " << years2month(age) << " months!" << endl;
    return 0;
}

int years2month(int age)
{
    return age * 12;
}*/


/*// exercise 5 : 编写一个程序，其中的main()调用一个用户定义的函数（以摄氏温度值为参数，并返回相应的华氏温度值）。
//              该程序按下面的格式要求用户输入摄氏温度值，并显示结果：
//              Please enter a Celsius value: 20
//              20 degrees Celsius is 68 degrees Fahrenheit.
//              下面是转换公式：华氏温度 = 1.8×摄氏温度 + 32.0
#include <iostream>
using namespace std;

int Cel2Fahr(int celsius);

int main()
{
    int celsius;
    cout << "Please enter a Celsius value:";
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << Cel2Fahr(celsius) << " degrees Fahrenheit." << endl;
    return 0;
}

int Cel2Fahr(int celsius)
{
    return 1.8 * celsius + 32.0;
}*/


/*// exercise 6 : 编写一个程序，其main()调用一个用户自定义函数（以光年值为参数，并返回对应天文单位的值）。
//              该程序按下面的格式要求用户输入光年值，并显示结果：
//              Enter a number of light years: 4.2
//              4.2 light years = 265608 astronomical units.
//      天文单位是从地球到太阳的平均距离（约150000000公里或93000000英里），光年是光一年走的距离（约10万亿公里或
//      6万亿英里）（除太阳外，最近的恒星大约离地球4.2光年）。请使用double类型（参见程序清单2.4），转换公式为：
//      1 光年 = 63240 天文单位 
#include <iostream>
using namespace std;

double lightYear2AstroUnit(double);

int main()
{
    double lightYears;
    cout << "Enter the number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years = ";
    cout << lightYear2AstroUnit(lightYears) << " astronomical units." << endl;
    return 0;
}

double lightYear2AstroUnit(double lightYear)
{
    return lightYear * 63240;
}*/


// exercise 7 : 编写一个程序，要求用户输入小时数和分钟数。在mian()函数中，将这两个值传递给一个void函数，
//              后者以下面这样的格式显示这两个值
//              Enter the number of hours: 9
//              Enter the number of minutes: 28
//              Time: 9:28
#include <iostream>
using namespace std;

void displayTime(int , int);

int main()
{
    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    displayTime(hours, minutes);

    return 0;
}

void displayTime(int hours, int minutes)
{
    cout << "Time: " << hours << ":" << minutes << endl;
}