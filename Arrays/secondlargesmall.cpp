// Find Second Smallest and Second Largest Element in an array

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int arr[] = {1, 1,2, 4, 7,7, 7, 5}; 
    int n = (sizeof(arr)/sizeof(arr[0]));
    map<int,int> mp;
    int secoundsmallest = 0;
    int secoundlargest = 0;

    if(n<2)
        cout<<"Array has less then two elements";

    for(int i=0;i<n;i++)
        mp[arr[i]]++;

    auto i = mp.begin();
    i++;
    secoundsmallest = i->first;

    auto j = mp.rbegin();
    j++;
    secoundlargest  = j->first;

    cout<<"Secound Smallest is: " <<secoundsmallest<<endl;
    cout<<"Secound Largest is: " <<secoundlargest<<endl;

    // sort(arr,arr+n);

    // cout<<"Second Smallest Number is:"<<arr[1]<<endl;
    // cout<<"Second Larget Number is:"<<arr[n-2]<<endl;

    return 0;
}