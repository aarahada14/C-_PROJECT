#include <iostream>
using namespace std;


float add(float num1, float num2) {
    return num1 + num2;
}


float subtract(float num1, float num2) {
    return num1 - num2;
}


float multiply(float num1, float num2) {
    return num1 * num2;
}


float divide(float num1, float num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 / num2;
}


int modul(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 0;
    }
    return num1 % num2;
}

int main() {
    int choice;
    float num1, num2;
    
    do {
       
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;

        
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting the program." << endl;
            break; 
        }

       
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        
        switch (choice) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            case 5:
               
                cout << "Result: " << modul(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
                break;
        }

    } while (true); 

    return 0;
}
