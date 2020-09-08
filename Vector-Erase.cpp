#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,n,k,s;
    vector<int>v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>k;
        v.push_back(k);
    }
    cin>>k;
    v.erase(v.begin()+k-1);
    cin>>i>>k;
    v.erase(v.begin()+i-1,v.begin()+k-1);
    s = v.size();
    cout<<s<<"\n";
    for(i=0;i<s;i++)
        cout<<v[i]<<" ";
    return 0;
}
