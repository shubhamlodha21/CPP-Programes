#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v =  {1,2,3,6,-2,11};

    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<<" ";
    
    cout<<"Maximum Element is:"<<*max_element(v.begin(),v.end());
    
    return 0;
}