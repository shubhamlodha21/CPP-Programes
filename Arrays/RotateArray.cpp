// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nums [] = {1,2,3,4,5,6,7};
    int k =3;
    int n = (sizeof(nums)/sizeof(nums[0]));
    vector<int> v;

    for(int i=n-k;i<n;i++)
        v.push_back(nums[i]);
    
    for(int i=0;i<n-k;i++)
        v.push_back(nums[i]);
    
    for(int i=0;i<n;i++)
        cout<<v[i]<< " ";
    

    return 0;
}

