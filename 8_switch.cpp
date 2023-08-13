#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter age" << endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "you are 12" << endl;
        break; // if you will not apploy break it will exitute next line
    case 1:
        cout << "you are 1" << endl;
        break;
    case 2:
        cout << "you are 2" << endl;
        break;
    default:
        cout << "you are not 2,12,1" << endl;
        break; // no need of break in default
    }
}