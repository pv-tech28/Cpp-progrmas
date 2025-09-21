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
    //for search an element in a matrix
    bool found;
    int ele;
    cout<<"Enter element to search: ";
    cin>>ele;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(matrix[i][j]==ele){
                cout<<"Element found at position: "<<i<<" "<<j<<endl;
                found=true;
            }
        }
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
    return 0;
}