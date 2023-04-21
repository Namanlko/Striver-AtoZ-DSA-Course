// 5) Write a program that takes an input of age from the user and print if they are adult or not.

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Age: "<<endl;
    cin>>age;

    if(age>18){
        cout<<"Adult!"<<endl;
    }
    else{
        cout<<"Not Adult!"<<endl;
    }
    return 0;
}