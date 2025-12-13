#include<iostream>
using namespace std;

int main()
{
    char ch1 = ' ';
    char ch2 = '  ';
    char ch = (int)('  ');
    char ch3 = 'AB';
    char ch4 = 'AX';

    string s1 = " ";
    string s2 = "  ";

    cout<< ch4 <<endl;
    cout<< ch3 <<endl;
    cout<< ch << endl;
    cout << s1.length() << endl; // 1
    cout << s2.length() << endl; // 2

    return 0;
}