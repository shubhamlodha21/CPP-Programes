#include<iostream>
using namespace std;

int main(void)
{
    int n = 5;

    for(int i=0;i<=n;i++)
    {
        // char ch = 'A' + n;
        // for(int j=0;j<=i;j++ )
        for(char ch = n + 'A' - i ; ch<='E'; ch++)
        {
            cout<<ch<<' ';
        }
        cout<<endl;
    }
    return 0 ;
}