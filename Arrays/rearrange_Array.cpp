// Problem Statement: There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr []  = {1,2,-4,-5};
    int n = (sizeof(arr)/sizeof(arr[0]));
    int pos = 0;
    int neg = 1;
    vector <int> v (n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            v[neg] = arr[i];
            neg = neg+2;
        }
        else
        {
            v[pos] = arr[i];
            pos = pos+2;
        }
    }

    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}