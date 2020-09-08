#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    set<int>s;
    int i,n,j,k;
    cin>>n;

    for(i=0;i<n;i++){
       cin>>j>>k;
       if(j==1){
        s.insert(k);
       }
       else if(j==2) {
        s.erase(k);
       }
       else{
        set<int>::iterator itr=s.find(k);
        if(itr == s.end()){
            cout<<"No\n";
        }
        else{
            cout<<"Yes\n";
        }
       }
    }
    return 0;
}



