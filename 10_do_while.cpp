#include <iostream>
using namespace std;
int main()
{
    int age = 0;
    cout << "Hello wolrd";
    do
    {
        // runs at ;east once
        cout << "the age is " << age << endl;
        age++;
    } while (age < 1023);
}