#include<iostream>
using namespace std;

int main(void)
{
    
    int arr [] = {1, 2, 4, 7, 7, 5,2,1,6,8};
    int secondlargest = arr[0];
    int n = (sizeof(arr)/sizeof(arr[0]));
    int largest = arr[0];

    for(int i=0;i<n;i++)
        if(arr[i]>largest)
            largest = arr[i];
    
    for(int i=0;i<n;i++)
        if((arr[i]>secondlargest) && (arr[i]<largest))
            secondlargest = arr[i];

    cout<<secondlargest;

    return 0;
}