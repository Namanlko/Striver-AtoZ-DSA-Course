// 6) A school has following rules for grading system.

/*

A) Below 25 - F
B) 25 to 44 - E
C) 45 to 49 - D
D) 50 to 59 - C
E) 60 to 79 - B
F) 80 to 100 - A

*/

// Ask User to enter the Marks and print the Corresponding Grade.

#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter Marks: "<<endl;
    cin>>marks;

    if(marks<25){
        cout<<"Grade is F"<<endl;
    }
    else if(marks<=44){
        cout<<"Grade is E"<<endl;
    }
    else if(marks<=49){
        cout<<"Grade is D"<<endl;
    }
    else if(marks<=59){
        cout<<"Grade is C"<<endl;
    }
    else if(marks<=79){
        cout<<"Grade is B"<<endl;
    }
    else if(marks<=100){
        cout<<"Grade is A"<<endl;
    }
    return 0;
}