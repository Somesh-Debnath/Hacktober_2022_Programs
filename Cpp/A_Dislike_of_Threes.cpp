#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << ' ' << x <<endl;
void solve(){

int n;
cin>>n;

int arr[n];
int count = 0;
for (int i = 1; i <= n; i++)
{
    if(i%3!=0){
        arr[i]=i;

    }
    else{
        count++;
        arr[i]=i+count;
    }
    
    
}
//     if(n%3!=0){

//     }
    cout<<arr[n]<<endl;



}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t;
cin>>t;
while(t--){


solve();


}

return 0;
}