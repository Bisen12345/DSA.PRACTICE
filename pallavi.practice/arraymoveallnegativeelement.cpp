#include <iostream>
using namespace std;
void shiftelement(int arr[], int l, int r)
{
    while (l <= r)
    {
        if (arr[l] < 0 && arr[r] < 0)
        {
            l++;
        }
        else if (arr[l] > 0 && arr[r] < 0)
        {
            int temp = arr[l];
            arr[l] = arr[r];
            arr[r] = temp;
            l++;
            r--;
        }
        else if (arr[l] > 0 && arr[r] > 0)
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    shiftelement(arr, 0, n);
    display(arr, n);
}

// time complexity=o(n);
// space complexity=o(1)