#include <iostream>
using namespace std;
class employee
{
public: // also private and protected
    string name;
    int salarty;
    void printdetails()
    {
        cout << "the name of our first employee is " << this->name << " and his salary is " << this->salarty;
    }
};

int main()
{
    //  public class can be accessed from anyware
    // privates can accessed only inside the class but not from outswide
    employee ayu;
    ayu.name = "ayush";
    ayu.salarty = 1000;
    // cout<<"the name of our first employee is "<< ayu.name << " and his salary is " << ayu.salarty;
    ayu.printdetails();
}