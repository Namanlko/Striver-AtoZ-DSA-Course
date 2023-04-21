// 7) Take the age from the user and then decide accordingly.

/*

A) If age<18:
    print -> Not Eligible for Job.

B) If age>=18 and age<=54:
    print -> Eligible for Job.

C) If age>=55 and age<=57:
    print -> Eligible for Job, but retirement.

D) If age>57:
    print -> Retirement Time.

*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter Age: "<<endl;
    cin>>age;

    if(age<18){
        cout<<"Not Eligible for Job."<<endl;
    }
    else if(age<=54){
        cout<<"Eligible for Job."<<endl;
    }
    else if(age<=57){
        cout<<"Eligible for Job, but retirement."<<endl;
    }
    else if(age>=60) {
        cout<<"Retirement Time."<<endl;
    }
    return 0;
}