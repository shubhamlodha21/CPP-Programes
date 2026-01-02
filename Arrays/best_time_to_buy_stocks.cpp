#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {7,1,5,3,6,4};
    int maxprofit = 0;
    int minprofit = v[0];

    for(int i=0;i<v.size();i++)
    {
        minprofit = min(minprofit,v[i]);
        maxprofit = max(maxprofit,v[i]-minprofit);
    }

    // O(N2)
    // for(int i = 0; i < v.size(); i++) {
    //     for(int j = i + 1; j < v.size(); j++) {
    //         int profit = v[j] - v[i];
    //         maxprofit = max(maxprofit, profit);
    //     }
    // }

    cout << maxprofit;
    return 0;
}
