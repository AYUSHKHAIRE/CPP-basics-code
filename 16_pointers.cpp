#include <iostream>
using namespace std;
int main()
{
    int age = 8;
    int *ptra; // derefrencing operator
    ptra = &age;
    cout << ptra << endl;
    cout << *ptra << endl;
}