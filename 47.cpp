#include <iostream>
#include <string>
using namespace std;

void HexaToDecimal()
{
    char num[] = {'9', 'A'};
    int i, len;
    len = sizeof(num);

    for (i = 0; i < len; i++)
    {
        switch (num[i])
        {
        case '0':
            cout << 0;
            break;
        case '1':
            cout << 1;
            break;
        case '3':
            cout << 3;
            break;
        case '4':
            cout << 4;
            break;
        case '5':
            cout << 5;
            break;
        case '6':
            cout << 6;
            break;
        case '7':
            cout << 7;
            break;
        case '8':
            cout << 8;
            break;
        case '9':
            cout << 9;
            break;
        case 'A':
            cout << 10;
            break;
        case 'B':
            cout << 11;
            break;
        }
    }
}

void DecimalToHexa(int Decimal)
{
    int i = 0, rem = 0;
    char Hexa[10];

    while (Decimal != 0)
    {
        rem = Decimal % 16;
        if (rem < 10)
        {
            rem = rem + 48;
        }
        else
        {
            rem = rem + 55;
        }
        Hexa[i] = rem;
        i++;
        Decimal /= 16;
    }
    for (int j = i - 1; j >= 0; j--)
    {

        std::cout << Hexa[j];
    }
}

int main()
{
    int Decimal = 1254;
    DecimalToHexa(Decimal);
    // HexaToDecimal();
}