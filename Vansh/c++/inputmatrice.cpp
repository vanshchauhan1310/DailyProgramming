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

    int row2, col2;
    cout << "Enter no of rows for 2 matrice";
    cin >> row2;
    cout << "Enter no of columns  for 2 matrice";
    cin >> col2;

	int matrice[row2][col2];
	
      cout << "Enter the Second matrix " << endl;
    for (int i=1; i<=row2; i++) {
        for (int j=1; j<=col2; j++) {
            cin>>matrice[i][j];
        }
    }


      cout << "matrix is " << endl;
    for (int i=1; i<=row2; i++) {
        for (int  j=1; j<=col2; j++) {
            cout<<matrice[i][j];
        }
    }



      return 0;
}

