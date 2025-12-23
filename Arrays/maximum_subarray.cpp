// Kadane's Algorithm : Maximum Subarray Sum in an Array

// Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.

// A subarray is a contiguous non-empty sequence of elements within an array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-2, 3, 5, -2, 7, -4};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int maxi = arr[0];
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum = sum +arr[i];

        if (sum<0)
            sum = 0;
        
        if(sum>maxi)
            maxi = max(maxi,sum);

    }

    cout<<maxi;
}