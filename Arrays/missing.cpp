// Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. Find the number(between 1 to N), that is not present in the given array..

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int arr[] = {1,2,3,5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if((i+1)!=arr[i])
        {   
            cout<<i+1;
            return -1;
        }
        
    }
    cout<<"ALRIGHT!";
    return 0;
}