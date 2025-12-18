// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums [] = {1,2,0,1,0,4,0};
    int n = (sizeof(nums)/sizeof(nums[0]));
    int zero = 0;
    int ans [n] = {0};
    int j = 0;

    for(int i=0;i<n;i++)
    {
        if(nums[i]!=0)
        {
           ans[j] = nums[i];
           j++;
        }
        else
        {
            zero++;
        }
    }

    for(int i=0;i<n;i++)
        cout<<ans[i]<<" ";

    return 0;
}