#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    
    cout << "Enter the array's row & column size: ";
    cin >> rows >> cols;

    
    int a [rows][cols], 
        b [cols][rows];

   
    cout << "Enter array's elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a [i][j];
        }
    }

   
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            b [j][i] = a [i][j];
        }
    }

    
    cout << "\nThe transpose matrix of the array:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << b [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}