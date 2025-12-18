// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[] = {4,1,2,1,4,0,1,1,9,2};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int maxi = n;
    map<int,int>m;

    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }

    for(int i=0;i<n;i++)
        if(m[arr[i]]==1)
            cout<< arr[i] << endl;
            return 1;
    
cout<<"No Number is occures only single time";
return 0;
    
}