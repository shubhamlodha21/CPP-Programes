#include <iostream>
using namespace std;

int main(void)
{
    int n = 312;
    bool first = true;  
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            if (!first)
                cout << ",";  // print comma before next number, not after last one
            cout << i;
            first = false;  // after first number, set flag to false
        }
    }

    return 0;
}
