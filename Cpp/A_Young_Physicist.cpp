#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << ' ' << x <<endl;
void solve(){
int n;
cin>>n;
int a1,b1,c1,a2,b2,c2,a3,b3,c3;
cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3;
if((a1+a2+a3)==0&&(b1+b2+b3)==0&&(c1+c2+c3)==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}


int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);

int t=1;
while(t--){


solve();


}

return 0;
}