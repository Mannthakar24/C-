#include <bits/stdc++.h>
using namespace std;

void InterSection(int arr[], int size, int arr2[], int size2)
{
    vector<int> v1;
    int i = 0, j = 0;

    sort(arr, arr + size);
    sort(arr2, arr2 + size2);

    while (i < size && j < size2)
    {
        if (arr[i] == arr2[j])
        {
            v1.push_back(arr[i]);
            i++;
            j++;
        }
        else if (arr[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    for (int m = 0; m < v1.size(); m++)
    {
        cout << v1[m] << " ";
    }
}

int main()
{
    int arr[] = {3, 8, 9}, size, arr2[] = {1, 3, 4, 8, 9}, size2;
    size = sizeof(arr) / sizeof(int);
    size2 = sizeof(arr2) / sizeof(int);
    InterSection(arr, size, arr2, size2);
}