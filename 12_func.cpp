#include <iostream>
using namespace std;

int square(int n)
{
    return n * n;
}
int main()
{
    int n;
    cout << "enter a number" << endl;
    cin >> n;
    cout << "thwe square is " << square(n) << endl;
}