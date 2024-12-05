#include<iostream>
#include <climits>
using namespace std;

int maxRowSum(int mat[100][100],int rows,int cols){
    int maxSum= INT_MIN;

    for(int i=0 ; i<rows;i++){    ///for column wise   i<cols
        int sumMax =0;
        for(int j =0; j<cols; j++){   //foe coloumn wise j<rows
            sumMax +=mat[i][j];       // for col wise mat[j][i]
        }
        maxSum= max(maxSum,sumMax);
    }
    return maxSum;
}

int main() {
    int mat[100][100]; // Fixed size array
    int rows, cols;

    // Input rows and columns
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Input matrix elements
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    // Output maximum row sum
    cout << "The maximum row sum is: " << maxRowSum(mat, rows, cols) << endl;

    return 0;
}