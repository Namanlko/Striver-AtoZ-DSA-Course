// 15) Question. Write a function to return the sum of two numbers.

#include<iostream>
using namespace std;

int Sum(int a, int b){
    return (a+b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Sum is "<<Sum(a,b);
    return 0;
}