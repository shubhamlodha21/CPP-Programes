// Vectors in STL are basically dynamic arrays that have the ability to change size whenever elements 
// are added or deleted from them. 
// Vector elements can be easily accessed and traversed using iterators.
// A vector stores elements in contiguous memory locations.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector  <int> v;

    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }

    cout<<"Elements in the vectors are:";
    for(auto i=v.begin();i!=v.end();i++)
        cout<<*i<< " ";

    cout << "\nThe front element of the vector: " << v.front();  //The front element of the vector
    cout << "\nThe last element of the vector: " << v.back(); //The last element of the vector
    cout << "\nThe size of the vector: " << v.size();  //The size of the vector
    cout << "\nDeleting element from the end: " << v[v.size() - 1];  //Deleting element from the end
    v.pop_back();

    cout << "\nPrinting the vector after removing the last element:" << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << "\nInserting 5 at the beginning:" << endl;
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << endl;
    cout << "Erasing the first element" << endl;
    v.erase(v.begin());  //Erasing the elements 
    cout << "Now the first element is: " << v[0] << endl;

    if (v.empty())
        cout << "\nvector is empty";  //If empty then print empty else print not empty
    else
        cout << "\nvector is not empty" << endl;  //vector is not empty

    v.clear();
    cout << "Size of the vector after clearing the vector: " << v.size();  //Return the size of the vector

    return 0 ;
}