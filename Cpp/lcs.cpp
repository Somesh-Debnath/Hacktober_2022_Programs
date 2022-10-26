#include <bits/stdc++.h>
using namespace std;

// Returns length of LCS for X[0..m-1], Y[0..n-1]
int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;

    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1),
                   lcs(X, Y, m - 1, n));
}

// Driver Code
int main()
{
    string X; // = "BDCABA";
    cout << "Enter the First String " << endl;
    cin >> X;
    string Y; // = "ABCBDA";
    cout << "Enter the Second String " << endl;
    cin >> Y;

    // Find the length of string
    int m = X.length();
    int n = Y.length();

    cout << "Length of LCS: " << lcs(X, Y, m, n);

    return 0;
}
