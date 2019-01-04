#include<iostream>

using namespace std;

int main()
{
    int **a;
    a = new int* [3];
    for(int i = 0;i < 3; i++)
    {
        a[i] = new int [3];
    }


    int k = 1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3 ; j++)
        {
            a[i][j] = k;
            k++;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
