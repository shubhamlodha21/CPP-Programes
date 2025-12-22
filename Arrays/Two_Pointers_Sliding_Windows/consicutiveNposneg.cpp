// #Problem Statement: Given an array and a sum k, we need to print the length of the longest subarray that sums to k.

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr [] = {-2,2,2,3,5};
    int n =5 ;
    int k =5;
    int maxi = 0;
    int sum = arr[0];
    int right=0 , left = 0;

    while(right<n)
    {
        while(left<=right && sum>k)
        {
            sum = sum - arr[left];
            left++;
        }

        if(sum==k)
        {
            maxi = max(maxi,right-left+1);
        }

       right++;
       sum = sum + arr[right];

    }

    cout<<maxi;
    return 0 ;
}