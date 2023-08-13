#include <iostream>
using namespace std;
int main()
{
    // int age[23]={1,2,3,4,5,6,7,8,9,0};
    // cout<<"Hello wolrd";
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"the value for"<<i+1<<" is "<<age[i]<<endl;
    // }

    int mat[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "filling matrix for " << i << j << endl;
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << " matrix for " << i << j << " are " << mat[i][j] << endl;
        }
    }
}