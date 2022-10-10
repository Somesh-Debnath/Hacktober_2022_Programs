#include <iostream>
using namespace std;

int fun(int a, int b)
{
    if (!b)
    {
        return 1;
        int ans = fun(a, b / 2);
    }
    ans = ans * ans;
    if (b % 2)
    {
        ans = (ans * a);
         return ans;
    }
}
int main()
{

    fun(2, 10);
}