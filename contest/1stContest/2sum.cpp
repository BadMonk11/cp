#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;

    // int target;cin>>target;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << i << " " << j << " " << arr[i] + arr[j] << endl;
        }
    }
    // 5 2 1 0 -1 3

    return 0;
}