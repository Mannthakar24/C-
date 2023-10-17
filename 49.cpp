#include <iostream>
using namespace std;

int main()
{
    int a[] = {1,1,1,1}, i, j, k = 2,sum=0;
    int size = sizeof(a) / sizeof(int);
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] + a[j] == k)
            {
                sum++;
            }
        }
    }
    cout<<sum;
}