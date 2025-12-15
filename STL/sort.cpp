// Sorting is one of the most standard operations used very frequently while writing programs. Writing the complete sorting algorithm might be time consuming and hence STL provides us with a standard inbuilt function to sort any container very easily.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    vector<int> vec = {4,2,0,9,2,1};
    sort(vec.begin(), vec.end());  //Sort the vector
    
    for(auto i=vec.begin();i!=vec.end();i++)
        cout<<*i<< " ";

    return 0;
}