#include <bits/stdc++.h>
using namespace std;

/*  Function to calculate the largest consecutive ones
*   x: given input to calculate the largest consecutive ones
*/
int maxConsecutiveOnes(int x)
{
    int count = 0;
    
    while(x!=0){
        x = (x & (x<<1));
        count++;
    }
    
    return count;    
}
// using bitwise operators
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
