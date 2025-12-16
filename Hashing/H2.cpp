//Given an array, we have found the number of occurrences of each element in the array.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10,5,10,15,10,5};
    map <int,int> mp ;

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++)
        mp[arr[i]]++;

    for (auto it = mp.begin(); it != mp.end(); it++) 
    {
        cout << it->first << " " << it->second << endl;
    }
        


    return 0;
}