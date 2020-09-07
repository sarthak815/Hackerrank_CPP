#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n_a,n_q, l_array,i ,j, main_array[10000][10000],k=0, query_array[100000][100000];
    cin>>n_a>>n_q;
    for(i=0;i<n_a;i++){
        l_array = 0;
        cin>>l_array;
        for(j=0;j<l_array;j++){
            cin>>main_array[i][j];
        }
    }
    for(i=0;i<n_q;i++){
        cin>>query_array[i][0]>>query_array[i][1];
    }
    for(i=0;i<n_q;i++){
        cout<<main_array[query_array[i][0]][query_array[i][1]]<<"\n";
    }

    return 0;
}
