#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {5, 8, 2, 10, 7, 15, 13, 11, 20, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}