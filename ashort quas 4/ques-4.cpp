#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[100][100];

    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    int rowNum, colNum;

    cout << "Enter the row number to find sum (0 to " << r-1 << "): ";
    cin >> rowNum;

    cout << "Enter the column number to find sum (0 to " << c-1 << "): ";
    cin >> colNum;

    int rowSum = 0;
    for (int j = 0; j < c; j++) {
        rowSum += arr[rowNum][j];
    }
    int colSum = 0;
    for (int i = 0; i < r; i++) {
        colSum += arr[i][colNum];
    }

    cout << "Sum of elements in row " << rowNum << " is: " << rowSum << endl;
    cout << "Sum of elements in column " << colNum << " is: " << colSum << endl;
    return 0;
}




    
    

    
    

    

    
    

    
    

    
    
    
    