#include <iostream>
#include <math.h>
using namespace std;

void DecimalToOctal(int decimal)
{
    int i = 0;
    int octal[10];

    while (decimal > 0)
    {

        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        cout << octal[j]<<endl;
    }
}

int OctalToDecimal(int Octal)
{
    int i = 0, Num = 0, Decimal = 0;

    while (Octal != 0)
    {
        Num = Octal % 10;
        Decimal = Decimal + Num * pow(8, i);
        i++;
        Octal /= 10;
    }
    return Decimal;
}

int main()
{
    int Decimal = 148, ans;
    DecimalToOctal(Decimal);

    ans = OctalToDecimal(2341);
    cout << ans;
}