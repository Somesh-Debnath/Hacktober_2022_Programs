#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    int ans = 0, i = 0;
    cout << "Enter an Decimal number : ";
    cin >> n;
    int temp = n;
    while (n != 0)
    {
        int bit = n & 1;
        int ans2 = (bit * pow(10, i));
        ans = ans + ans2;
        n = n >> 1;
        i++;
    }

    cout << temp << " in binary is : " << ans;
}