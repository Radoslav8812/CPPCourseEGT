//
//  Student.cpp
//  TeacherStudents
//
//  Created by Rado on 17.01.24.
//

#include "Student.hpp"

Student:: Student (string name){
    this -> name = name;
}

void Student:: setName(string name){
    this -> name = name;
}
string Student:: getName(){
    return name;
}
