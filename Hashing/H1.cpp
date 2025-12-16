#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr [] = {1, 2, 1, 3, 2};
    int brr [] = {1, 3, 4, 2, 10};
    map <int,int> m;

    for(int i=0;i<5;i++)
        m[arr[i]]++;

    for(int i=0;i<5;i++)
        cout<< "Count of" <<brr[i]<< "==" <<m[brr[i]]<<endl;
    
    // for(int i=0;i<5;i++)
    // {   
    //     int count = 0;
    //     for(int j=0;j<5;j++)
    //     {
    //         if(brr[i]==arr[j])
    //         {
    //             count++;
    //         }
    //     }

    //     cout<<brr[i]<< " " <<count<<endl;
    // }


    return 0;
}