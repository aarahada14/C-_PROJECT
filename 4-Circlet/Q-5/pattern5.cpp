#include <iostream>
using namespace std;

int main() {
    int rows = 5; 
    
    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= rows - i; j++) {
            cout << " " << " ";
        }
        
        
        for (int j = rows - i + 1; j <= rows; j++) {
            cout << j << " ";
        }
        
       
        for (int j = rows - 1; j >= rows - i + 1; j--) {
            cout << j << " " ;
        }
        
        cout << endl;
    }

    return 0;
}