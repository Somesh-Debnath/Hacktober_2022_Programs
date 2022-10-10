#include<bits/stdc++.h>
using namespace std;

void solve(){
int h,x,y,c;
cin>>h>>x>>y>>c;
if((x+y/2)<=c/h){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}
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