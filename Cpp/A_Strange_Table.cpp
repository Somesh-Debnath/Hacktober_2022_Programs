#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << ' ' << x << endl;
void solve()
{

    ll n, m, x;
    cin >> n >> m >> x;

    ll mat[n + 1][m + 1];

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            mat[i][j]=i+j;

        }
    }

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            cout << mat[i][j];
        }
         cout<<endl;
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