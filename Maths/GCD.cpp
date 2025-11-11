// Given two integers N1 and N2, find their greatest common divisor.

#include<iostream>
using namespace std;

int n=20;
int m=15;

int main(void)
{
    for(int i=2;i<=n/2;i++)
    {
        if((m%i==0) and (n%i==0))
        {
            cout<<i;
        }
    }
}