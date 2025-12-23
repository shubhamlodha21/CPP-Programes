// Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr [] = {1, 0, 2, 1, 0};
    int n  = (sizeof(arr)/sizeof(arr[0]));
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            cnt0++;
        else if(arr[i]==1)
            cnt1++;
        else    
            cnt2++;
    }

    int idx = 0;

    for(int i=0;i<cnt0;i++)
        arr[idx++]=0;
    
    for(int i=0;i<cnt1;i++)
        arr[idx++] = 1;
    
    for(int i=0;i<cnt2;i++)
        arr[idx++] = 2;

    for(int i=0;i<n;i++)
        cout<<arr[i] << " ";


// Dutch National Flag algorithm
//class Solution {
// public:
//     // Function to sort array containing 0s, 1s, and 2s using Dutch National Flag Algorithm
//     void sortZeroOneTwo(vector<int>& nums) {
//         // Initialize three pointers: low, mid starting from 0, high from end of array
//         int low = 0, mid = 0, high = nums.size() - 1;

//         // Process elements until mid pointer crosses high pointer
//         while (mid <= high) {
//             // If current element is 0, swap with low and move both pointers forward
//             if (nums[mid] == 0) {
//                 swap(nums[mid], nums[low]);
//                 mid++;
//                 low++;
//             }
//             // If current element is 1, it's already in correct place → move mid forward
//             else if (nums[mid] == 1) {
//                 mid++;
//             }
//             // If current element is 2, swap with high and move only high pointer backward
//             else {
//                 swap(nums[mid], nums[high]);
//                 high--;
//             }
//         }
//     }
// };
        
    return 0;
}