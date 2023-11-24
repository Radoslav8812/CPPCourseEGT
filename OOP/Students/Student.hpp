//
//  Student.h
//  OOP
//
//  Created by Rado on 24.11.23.
//

#ifndef Student_h
#define Student_h
#include <string>
using namespace std;

class Student {
    
private:
    string name;
    int age;
    float gpa;

public:
    // Constructor
    Student(string name, int age, float gpa);

    // Methods
    void setName(string newName);
    string getName();
    
    void setAge(int newAge);
    int getAge();

    void setGPA(float newGPA);
    float getGPA();    
};

#endif /* Student_h */
