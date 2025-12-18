// Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

// The union of two arrays can be defined as the common and distinct elements in the two arrays.a

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};
    int n = (sizeof(arr1)/sizeof(arr1[0]));
    int m = (sizeof(arr2)/sizeof(arr2[0]));

    set<int> s;

    for(int i=0;i<n;i++)
    {
        s.insert(arr1[i]);
    }

    for(int j=0;j<m;j++)
    {
        s.insert(arr2[j]);
    }

   for(auto it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}