//  Given an array nums of size n and an integer k, 
// find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums [] = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int l = 0;
    int r = 0;
    int n = (sizeof(nums)/sizeof(nums[0]));
    int sum = 0;
    int maxi = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            sum = 0;
            for(int k=i;k<j;k++)
                sum = sum + (nums[k]);

            if(sum==k)
            {
                maxi = (0,j-i+1);
            }
        }
    }

    cout<<maxi;

   
    
    

    
    return 0;
}