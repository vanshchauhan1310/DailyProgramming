#include <iostream>


using namespace std;

int main() {
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


      cout << "matrix is " << endl;
    for (int i=1; i<=row; i++) {
        for (int  j=1; j<=col; j++) {
            cout<<matrix[i][j];
        }
    }


   cout << endl;

	int matrice[row][col];
	
      cout << "Enter the Second matrix " << endl;
    for (int i=1; i<=row; i++) {
        for (int j=1; j<=col; j++) {
            cin>>matrice[i][j];
        }
    }


      cout << "matrix is " << endl;
    for (int i=1; i<=row; i++) {
        for (int  j=1; j<=col; j++) {
            cout<<matrice[i][j];
        }
    }


     cout<<endl;
int sum[row][col];  

    for(int i=1; i<=row; i++){
    for(int j=1; j<=col; j++){

	sum[i][j] = matrix[i][j] + matrice[i][j];
    }
    
    }
    cout << "matrix is " << endl;
    for (int i=1; i<=row; i++) {
        for (int  j=1; j<=col; j++) {
            cout<<sum[i][j];
        }
    }

      return 0;
}
