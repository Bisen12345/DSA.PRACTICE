// #include<bits/stdc++.h>
// using namespace std;
// void reverse(int arr[],int low,int high){
//     while(low<high){
//         swap(arr[low],arr[high]);
//         low++;
//         high--;
//     }
// }
// void rotate(int arr[],int d,int n){
//     if(d==0)
//     return;
//     d=d%n;
    
//     reverse(arr,0,d-1);
//     reverse(arr,d,n-1);
//     reverse(arr,0,n-1);
    

// }
// void printarray(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int n,d;
//     cin>>n>>d;
//     // vector<int>v
//     int arr[n];
//     for(int i=0;i<n;i++){
//         // int x;
//         // cin>>x;
//         // v.push_back(x);
//         cin>>arr[i];
//       }
//       rotate(arr,d,n);
//       printarray(arr,n);
//       cout<<endl;
// }

// using vector

#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int low,int high){
    while(low<high){
        swap(v[low],v[high]);
        low++;
        high--;
    }
}
void rotate(vector<int>&v,int d,int n){
    if(d==0)
    return;
    d=d%n;
    
    reverse(v,0,d-1);
    reverse(v,d,n-1);
    reverse(v,0,n-1);
    

}
void printarray(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    
    int n,d;
    cin>>n>>d;
    vector<int>v;
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        
      }
      rotate(v,d,n);
      printarray(v);
      cout<<endl;
}