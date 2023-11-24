//
//  Student.cpp
//  OOP
//
//  Created by Rado on 24.11.23.
//

#include "Student.h"
using namespace std;

// Constructor
Student::Student(string name, int age, float gpa) {
    this->name = name;
    this->age = age;
    this->gpa = gpa;
}

// Methods
void Student::setName(string newName) {
    name = newName;
}
string Student::getName() {
    return name;
}

void Student::setAge(int newAge) {
    age = newAge;
}
int Student::getAge() {
    return age;
}

void Student::setGPA(float newGPA) {
    gpa = newGPA;
}
float Student::getGPA() {
    return gpa;
}
