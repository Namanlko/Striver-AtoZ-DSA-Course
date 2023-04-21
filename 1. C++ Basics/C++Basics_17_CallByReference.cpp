// 17) Call By Reference

#include<iostream>
using namespace std;

void Update(int &a){
    a = a+1;
}

int main(){
    int a,b;
    cin>>a;
    cout<<"a Before Update is "<<a<<endl;
    Update(a);
    cout<<"a After Update is "<<a<<endl;
    return 0;
}