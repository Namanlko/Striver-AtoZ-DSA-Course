// 4) Data Types in C++:

#include<bits/stdc++.h>
using namespace std;

int main(){

    // 1) Number Data Types:
    
    int a = 1;
    cout<<a<<endl;
    cout<<"Size is "<<sizeof(a)<<endl;

    long b = 2;
    cout<<b<<endl;
    cout<<"Size is "<<sizeof(b)<<endl;

    long long c = 3;
    cout<<c<<endl;
    cout<<"Size is "<<sizeof(c)<<endl;

    float d = 4.0;
    cout<<d<<endl;
    cout<<"Size is "<<sizeof(d)<<endl;

    double e = 5.0;
    cout<<e<<endl;
    cout<<"Size is "<<sizeof(e)<<endl;

    // 2) String Data Types:
    
    // 2.A String Input Method 1. String without Spaces.
    /*
    string str;
    cin>>str;
    cout<<str<<endl;
    */

    // 2.B String Input Method 2. String with Spaces.
    string name;
    getline(cin,name);
    cout<<name<<endl;

    // 3) Character Data Types:
    char ch;
    cin>>ch;
    cout<<ch;
    
    return 0;
}