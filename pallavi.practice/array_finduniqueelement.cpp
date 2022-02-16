#include <bits/stdc++.h>
using namespace std;
int findunique_element(vector<int> &arr,int n){
	int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];  //because using xor formula:  x^x=0 and 0^x=x 
    }
    return ans;
    // Write your code here.
}

int main()
{
    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<findunique_element(arr,n);
        
}