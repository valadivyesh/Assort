#include <iostream>
using namespace std;

int main() {
    int r, c;
    
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[100][100]; 
    cout << "Enter elements of the array:"<< endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    int large = arr[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > large) {
                large = arr[i][j];
            }
        }
    }
    cout << "The largest element in the 2D array is: " << large << endl;

    return 0;
}

    
    

   
    

  
    

    
