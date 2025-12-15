// The problem of counting set bits in an integer means finding the number of 1’s in its binary representation. For example, the binary form of 7 is 111, which has 3 set bits.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 1111;
    cout << __builtin_popcount(n);
    return 0;
}