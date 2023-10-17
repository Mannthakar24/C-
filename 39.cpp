#include<iostream>
using namespace std;

void rotation(int arr[],int size,int r)
{
    int i;
    int temp = size;
    cout<<temp;

    for(i=size;i>0;i++)
    {
        arr[i]=arr[i-1];
    }

    arr[0]=temp;
    

    for (i = 0; i < size; i++)
    {
        cout << arr[i]<<',';
    }

}


int main()
{
    int arr[]={1,2,3,4,5,6,7},size,k=3;
    size = 7;

    rotation(arr,size,k);


}