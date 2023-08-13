#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salarty;
    void printdetails()
    {
        cout << "the name of our first employee is " << this->name << " and his salary is " << this->salarty;
    }
};
class programmer : public employee
{
public:
    int errors;
    // inheritance
    // properties of one class goes to another
};
int main()
{
    employee ayu;
    ayu.name = "ayush";
    ayu.salarty = 1000;
    ayu.printdetails();
}