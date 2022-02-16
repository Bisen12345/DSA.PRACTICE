#include <iostream>
using namespace std;
int min(int arr[], int n)
{
    int mn = arr[0];
    for (int i = 0; i < n; i++)
    {
        mn=min(mn,arr[i]);
        // if (mn > arr[i])
        // {
        //     mn = arr[i];
        // }
    }
    return mn;
}
int max(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx=max(mx,arr[i]);
        // if (mx < arr[i])
        // {
        //     mx = arr[i];
        // }
    }
    return mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the minimum value of array: " << min(arr, n) << endl;
    cout << "the maximum value of array: " << max(arr, n) << endl;
}
