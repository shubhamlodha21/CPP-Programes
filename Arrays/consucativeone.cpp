// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    vector <int> v = {1,1,0,1,1};
    int cnt = 0;
    int ans = 0 ;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }

        ans = max(ans,cnt);
    }

    cout<<ans;
}
