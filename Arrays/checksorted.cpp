// Check if an Array is Sorted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,2,4,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    bool flag = true;

    for (int i=0;i<n-1;i++)
        {
        if (arr[i+1]<arr[i])
            {
                flag = false;
                break;
            }
        }

    cout<<flag;
    return EXIT_SUCCESS;
}