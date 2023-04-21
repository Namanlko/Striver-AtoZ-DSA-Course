// 9) Arrays in C++:

#include<iostream>
using namespace std;

int main(){

    // 1) One Dimensional Array.
    
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;

    // 2) Two Dimensional Array.
    
    int mat[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                                };
    cout<<mat[0][0]<<endl;
    cout<<mat[0][1]<<endl;
    cout<<mat[0][2]<<endl;
    cout<<mat[1][0]<<endl;
    cout<<mat[1][1]<<endl;
    cout<<mat[1][2]<<endl;
    cout<<mat[2][0]<<endl;
    cout<<mat[2][1]<<endl;
    cout<<mat[2][2]<<endl;
    
    
    return 0;
}