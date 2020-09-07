#include <iostream>
#include <string>
using namespace std;


int main() {
    string a,b;
    int n,i,j;
    char temp;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<"\n"<<a+b<<"\n";
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
}
