#include<iostream>
using namespace std;
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(current<a[j]&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<a[k-1]<<endl<<a[n-k];
    return 0;
}