#include <iostream>
#include "Student.h"
using namespace std;

int main() {
    // Creating a student object
    Student student("Alice", 20, 5.50);

    cout << "Initial student information: " << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "GPA: " << student.getGPA() << endl;
    
    cout << endl;

    // Modifying student information
    student.setName("Bob");
    student.setAge(22);
    student.setGPA(4.85);

    // Displaying updated student information
    cout << "Updated student information: " << endl;
    cout << "Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "GPA: " << student.getGPA() << endl;

    return 0;
}

