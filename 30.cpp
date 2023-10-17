#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int decimal = 0, i = 0, binary = 10, number;

    while (binary != 0)
    {
        number = binary % 10;
        if (number == 1)
        {
            decimal = decimal + pow(2, i);
        }
        i++;
        binary /= 10;
    }
    cout << decimal;
}
