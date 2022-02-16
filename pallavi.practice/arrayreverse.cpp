// 1.using iterative approach
// time complexity=0(n)
// space complexity=o(1)
// more optimize than 2.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    int s=0;
    int e=n-1;
    while(s<e){
        int temp=a[s];
        a[s]=a[e];
        a[e]=temp;
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

//2. using iterative approach
// time complexity=o(n)
// space complexity=o(n)

// #include <iostream>

// using namespace std;
// void print(int a[],int n){
//     for(int i=n-1;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
// }
// print(a,n);
// }

// using recursion approch
// time complexity=o(n)
// space complexity=o(n)

// #include <iostream>
// using namespace std;
// void print(int a[],int n){
//     for(int i=n-1;i>=0;i--){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void arrayreverse(int a[], int n)
// {
//     if (n == 0)
//     {
//         return;
//     }

//     cout << a[n - 1] << " ";
//     arrayreverse(a, n - 1);
// }
// int main()
// {
//     // int a[]={1,2,3,4,5};
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
// }
// print(a,n);
// arrayreverse(a, n);
// return 0;
// }

// using recursion approch
// time complexity=o(n)
// space complexity=o(n)

// #include<iostream>
// using namespace std;
// void reverse(int arr[],int n,int start,int end){
//     if(start>end){
//         return;
//     }
//     else{
//         swap(arr[start],arr[end]);
//         reverse(arr,n,start+1,end-1);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     reverse(arr,n,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// using stl function
// time complexity=o(n)
// space complexity=o(1)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     reverse(v.begin(),v.end());
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

// }


// other way of reversing array
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
