#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Emter your age" << endl;
    cin >> age;
    if (age > 120 || age < 1)
    {
        cout << "kyu be zooth bolta hain" << endl;
    }
    else if (age >= 18)
    {
        cout << "you can vote" << endl;
    }
    else
    {
        cout << "you cannot vote" << endl;
    }
}