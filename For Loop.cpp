#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    for(int n1 =a; n1<=b;n1++){
    if(n1==1){
        cout<<"one\n";
    }
    else if(n1==2){
        cout<<"two\n";
    }
    else if(n1==3){
        cout<<"three\n";
    }
    else if(n1==4){
        cout<<"four\n";
    }
    else if(n1==5){
        cout<<"five\n";
    }
    else if(n1==6){
        cout<<"six\n";
    }
    else if(n1==7){
        cout<<"seven\n";
    }
    else if(n1==8){
        cout<<"eight\n";
    }
    else if(n1==9){
        cout<<"nine\n";
    }
    else{
        if(n1%2==0){
            cout<<"even\n";
        }
        else{
            cout<<"odd\n";
        }
    }
    }
    return 0;
}
