#include<iostream>
using namespace std;

int main(void)
{
    int n = 5;

    for(int i=0;i<n;i++)
    {
        //Spaces            
        for(int j=0;j<n-i-1;j++)
        {
            cout<< " ";
        }

        //Alphabets
        for (int j=0;j<2*i+1;j++) 
        {
            cout<< "*";
        }

        cout<<endl;
    }
    return 0 ;
}