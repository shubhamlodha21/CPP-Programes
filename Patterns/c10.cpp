#include<iostream> 
using namespace std;

int main(void)
{
    int n =5;
    // for (int i=0;i<n;i++)
    // {
    //     for(int j=0;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n-1;i++)
    //  {
    //     for(int j=n-i-1;j>0;j--)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

     for(int i = 1; i < 2*n; i++)
    {
        int stars;

        // Upper half (1 to n)
        if(i <= n)
            stars = i;
        // Lower half (n+1 to 2n-1)
        else
            stars = 2*n - i;

        // Print stars
        for(int j = 0; j < stars; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}