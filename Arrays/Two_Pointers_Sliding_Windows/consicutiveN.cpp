//  Given an array nums of size n and an integer k, 
// find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums [] = {-2,2,-2,3,5};
    int k = 5;
    int l = 0;
    int r = 0;
    int n = (sizeof(nums)/sizeof(nums[0]));
    int sum = 0;
    int maxi = 0;

    // BEST  - (TWO POINTER) O(2n)
    int left = 0;
    int right = 0;
    sum = nums[0];

    while(right < n)
    {   
        while(left <= right && sum>k)
        {
            sum = sum - nums[left];
            left++;
        }

        if(sum == k)
        {
            maxi = max(maxi ,right - left + 1);
        }
        right++;
        if(right<n)
        {
            sum = sum + nums[right];
        }

    }

    cout<<maxi;

    

    //BRUTE - FORCE METHOD (n2)
    // for(int i=0;i<n;i++)
    // {
    //     sum = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         sum = sum + nums[j];
    //         if(sum==k)
    //         {
    //             maxi = (0,j-i+1);
    //         }
    //     }
    // }
    // cout<<maxi;

   
    
    

    
    return 0;
}