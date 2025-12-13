#include<iostream>
using namespace std;

int main(void)
{
    int n = 5;
    for(int i=0;i<n;i++)
    {
        char ch = 'A';
        for(int ch='A';ch<='A'+ i;ch++)
        {
            cout<<char(ch);
        }
        cout<<endl;
    }

    return 0;
}