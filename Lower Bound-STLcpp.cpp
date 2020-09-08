#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n,k,n1;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cin>>n1;
    for(i=0;i<n1;i++){
        cin>>k;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), k);
        if (v[low - v.begin()] == k)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;

    }
    return 0;
}
