#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << ' ' << x << endl;
void solve()
{

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if ((a + b) <= d && c <= e || (a + c) <= d && b <= e || (b + c) <= d && a <= e)
    {

        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        int t;
        cin >> t;
        while (t--)
        {

            solve();
        }

        return 0;
    }