#include <iostream>
#include <string>
using namespace std;


class Student {
    public:
    int roll_no;
    string name;
    int chem_marks;
    int maths_marks;
    int phy_marks;
};


float calculatePercentage(int chem_marks, int maths_marks, int phy_marks) {
    int total_marks = chem_marks + maths_marks + phy_marks;
    return (float(total_marks) / 300) * 100;
}

int calculateTotal(int chem_marks, int maths_marks, int phy_marks) {
    return chem_marks + maths_marks + phy_marks;
}


void displayMarksheet(Student student) {
    float percentage = calculatePercentage(student.chem_marks, student.maths_marks, student.phy_marks);
   int total_marks = calculateTotal(student.chem_marks, student.maths_marks, student.phy_marks);
    cout << student.name<<"("<<student.roll_no<<")" << endl;
    cout << "Chemistry => " << student.chem_marks << endl;
    cout << "Mathematics => " << student.maths_marks << endl;
    cout << "Physics => " << student.phy_marks << endl;
    cout<<"total => "<<total_marks<<"/300"<<endl;
    cout << "Percentage => " << percentage << "%" << endl;
    cout<<endl;
}

int main() {
    

    Student s1;
    Student students[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Roll No => ";
        cin >> students[i].roll_no;
        cin.ignore();
        
        cout << "Name => ";
        getline(cin, students[i].name);
        
        cout << "Chemistry => ";
        cin >> students[i].chem_marks;
        
        cout << "Mathematics => ";
        cin >> students[i].maths_marks;
        
        cout << "Physics Marks => ";
        cin >> students[i].phy_marks;
        cout<<endl;
    }

    for (int i = 0; i < 5; i++) {
        displayMarksheet(students[i]);
    }

    return 0;
}