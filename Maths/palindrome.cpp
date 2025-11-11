// Input: x = 121
// Output: true

#include<iostream>
using namespace std;

int n = 121;
int org = n ;
int rev = 0;
int digit = 0;

int main(void)
{
    while(n>0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;
    }

    if (org==rev)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }
    return 0; 
}

