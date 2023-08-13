#include <iostream>
using namespace std;
class employee
{
public:
    string name;
    int salarty;
    employee(string name, int salaary, int secretpassword)
    {
        this->name = name;
        this->salarty = salaary;
        this->secretpassword = secretpassword;
    }
    void printdetails()
    {
        cout << "the name of our first employee is " << this->name << " and his salary is " << this->salarty << endl;
    }
    void getsecretpassword()
    {
        cout << " the secret password is " << secretpassword;
    }

private:
    int secretpassword;
};

int main()
{
    employee ayu("ayush", 1000, 2000);
    ayu.printdetails();
    ayu.getsecretpassword();
    // cout<<secretpassword;  cant access as a private variable
}