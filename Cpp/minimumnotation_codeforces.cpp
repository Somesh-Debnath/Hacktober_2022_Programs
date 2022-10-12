#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    vector<int> suff(n);
    suff[n - 1] = s[n - 1] - '0';
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = min(s[i] - '0', suff[i + 1]);
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] - '0') != suff[i])
        {
            pq.push(min(9, (s[i] - '0') + 1));
        }
        else
        {
            if (pq.empty())
            {
                ans.push_back(suff[i]);
            }
            else
            {
                if (suff[i] < pq.top())
                {
                    ans.push_back(suff[i]);
                }
                else
                {
                    while (pq.top() < suff[i] && !pq.empty())
                    {
                        ans.push_back(pq.top());
                        pq.pop();
                    }
                    ans.push_back(suff[i]);
                }
            }
        }
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
