#include<iostream>
using namespace std;
int main(){
    
    int mx=-1999999;
    // int mn=1999999999;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        // mn=min(mn,arr[i]);
        cout<<mx<<" "<<endl;
        // cout<<mn<<" "<<endl;
    }
    return 0;
}