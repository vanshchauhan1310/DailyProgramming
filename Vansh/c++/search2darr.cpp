#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout << "Enter no of rows";
    cin >> row;
    cout << "Enter no of columns";
    cin >> col;

	int matrix[row][col];
	
      cout << "Enter the matrix " << endl;
    for (int i=1; i<=row; i++) {
        for (int j=1; j<=col; j++) {
            cin>>matrix[i][j];
        }
   }
   
   int element;
   
   cout<<"Enter the number to search";
   cin>>element;
   
       for (int i=1; i<=row; i++) {
        for (int j=1; j<=col; j++) {
       if(matrix[i][j] == element){
       cout<<"true";
       }
       
        }
        }
   
   
   
   }
