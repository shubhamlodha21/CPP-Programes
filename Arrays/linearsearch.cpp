// : Given an array, and an element num the task is to find if num is present in the given array or not. If present print the index of the element or print -1.

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5};
    int num =0;
    int n = (sizeof(arr)/sizeof(arr[0]));

    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {   
            cout<<"TRUE";
            return 1;
        }
    }
    cout<<"FALSE";
    return -1;
}