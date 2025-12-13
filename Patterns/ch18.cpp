#include<iostream>
using namespace std;

int main(void)
{
    int n = 5;

    for(int i=0;i<n;i++)
    {
        for(char ch = 'A' + n; ch>='A'; ch-- )
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}