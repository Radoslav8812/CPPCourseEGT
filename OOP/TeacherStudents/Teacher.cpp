//
//  Teacher.cpp
//  TeacherStudents
//
//  Created by Rado on 17.01.24.
//

#include "Teacher.hpp"

Teacher:: Teacher(string name) {
    this -> name = name;
}

void Teacher:: setName(string name){
    this -> name = name;
}
string Teacher:: getName(){
    return name;
}

void Teacher:: addStudent(Student student){
    studentsVect.push_back(student);
}

void Teacher:: display(){
    cout << "Teacher name -> " << this -> name << endl;
    
    for (auto& student: studentsVect){
        cout << "Student name -> " << student.getName() << endl;
    }
}
