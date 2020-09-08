#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,n,marks;
    string a;
    map <string, int>m;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        if(j==1){
            cin>>a>>marks;
            map<string,int>::iterator itr=m.find(a);
            if(itr==m.end()){
                m.insert(make_pair(a,marks));
            }
            else{
                marks = marks + m[a];
                m.erase(a);
                m.insert(make_pair(a,marks));
            }
            m.insert(make_pair(a,marks));
        }
        else if(j==2){
            cin>>a;
            m.erase(a);
        }
        else{
            cin>>a;
            map<string,int>::iterator itr=m.find(a);
            if(itr==m.end()){
                cout<<"0\n";
            }
            else{
                cout<<m[a]<<"\n";
            }

        }
    }
    return 0;
}



