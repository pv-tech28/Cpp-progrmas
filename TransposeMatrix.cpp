#include <iostream>
using namespace std;
int main(){
    int c,r;
    cout <<"Enter no. of rows: ";
    cin>>r;
    cout<<"Enter no. of columns: ";
    cin>>c;
    int matrix[r][c];
    cout<<"Enter elements of the matrix:-- "<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout<<"Element["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];        
        }
    }
    cout<<"Matrix is: "<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout<<matrix[i][j]<< " ";
        }
        cout<<endl;
    
    }
    //Transpose of matrix
    cout<<"Transpose Matrix is: "<<endl;
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
}