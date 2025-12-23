// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums [] = {2,2,1,1,1,2,2,1,1};
    int n = (sizeof(nums)/sizeof(nums[0]));

    unordered_map<int, int> mp;

    for(int i=0;i<n;i++)
    {
        mp[nums[i]]++;
        if(mp[nums[i]]<n/2)
        {
            cout<<nums[i];
            return 0;
        }
    }

    // for(int i=0;i<n;i++)
    // {
    //     int cnt=0;
    //     for(int j=0;j<n;j++)
    //     {
    //         if(nums[i]==nums[j])
    //             cnt++;
    //     }

    //     if(cnt>(n/2))
    //     {
    //         cout<<nums[i];
    //         return 0;
    //     }
    // }

}