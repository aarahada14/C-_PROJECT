#include <iostream>
using namespace std;

int main() {
    char str[100];  

   
    cout << "Enter any string: ";
    cin.getline(str, 100);  

   
    char* ptr = str;
    int length = 0;

    
    while (*ptr != '\0') {  
        length++;
        ptr++;  
    }

    
    cout << "The length of the string is: " << length << endl;

    return 0;
}
