// Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.

// i/p = 5
// o/p =true

#include<iostream>
using namespace std;

int main(void)
{
    int n =21;
    
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"NOT PRIME"<<endl;
            exit(0);
        }
    }

cout<<"PRIME";
    
    return 0 ;
}