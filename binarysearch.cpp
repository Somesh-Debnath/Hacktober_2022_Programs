#include<iostream>
using namespace std;
int main(){int  a,num,i,j,l=0,m,f=0;
    cout<<"size";
    cin>>a;
    int u=a-1;
    int ar[a];
    cout<<"Enter elements"<<endl;
    for(i=0;i<a;i++){
        cin>>ar[i];
    }
    cout<<"Enter No. to be find"<<endl;
    
    
    cin>>num;
    while(l<=u){
        m=(l+u)/2;
        if(num>ar[m]){
            l=m+1;
        }
        else if(num<ar[m]){
            u=m-1;
        }
        else{
            f=1;
            break;
        }

    }
    if(f==0){
        cout<<"not present";
    }
    else{
        cout<<num<<" Is present on "<<m+1;
    }
}