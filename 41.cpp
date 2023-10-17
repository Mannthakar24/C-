#include <iostream>
#include <algorithm>
using namespace std;

int Number(int number)
{
    std::string numstr = std::to_string(number);
    std::sort(numstr.begin(), numstr.end());
    numstr.erase(0, numstr.find_first_not_of('0'));
    return numstr.empty() ? 0 : std::stoi(numstr);
}

int main()
{
    int number = 103, ans;
    ans = Number(number);
    cout << ans;
}


