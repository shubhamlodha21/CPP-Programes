// Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.
// If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements. 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr [] = {1,1,2,2,2,3,3};
    int n = (sizeof(arr)/sizeof(arr[0]));
    set<int> s(arr,arr+n);

    for(auto i=s.begin();i!=s.end();i++)
        cout<<*i<<endl;
}