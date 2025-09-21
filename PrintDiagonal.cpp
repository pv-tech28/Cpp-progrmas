#include <iostream>
using namespace std;
int main(){
    int s;
    cout <<"Enter size of matrix: ";
    cin>>s;
    int matrix[s][s];
    cout<<"Enter elements of the matrix:-- "<<endl;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            cout<<"Element["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];        
        }
    }
    cout<<"Matrix is: "<<endl;
    for (int i = 0; i < s; i++) {
        for (int j = 0; j < s; j++) {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    }
    //to print the diagonal of matrix
    cout<<"Primary diagonal elements:- ";
    for (int i = 0; i < s; i++){
        cout<<matrix[i][i]<<" ";
    }
    cout<<endl<<"Secondary diagonal elements:- ";
    for(int i=0;i<s;i++){
        cout<<matrix[i][s-i-1]<<" ";
    }
    cout<<endl;

}