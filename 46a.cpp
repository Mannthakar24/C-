#include <iostream>
using namespace std;
int main()
{
    int decimal = 148, i = 0, rem = 0;
    int octal[10];

    while (decimal > 0)
    {

        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j];
    }
}