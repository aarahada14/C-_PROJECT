#include <iostream>
using namespace std;


void calculateCube(int* ptr) {
    
    cout << (*ptr) * (*ptr) * (*ptr) << " ";
}

int main() {
    int m, n;
    
    
    cout << "Enter array's size: ";
    cin >> m >> n;  
    
    int arr[m][n];
    
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }

    
    
    cout << "Cubes of all elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
            int* ptr = &arr[i][j];
            calculateCube(ptr);
        }
        cout << endl;
    }

    return 0;
}
