//
//  Teacher.hpp
//  TeacherStudents
//
//  Created by Rado on 17.01.24.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Student.hpp"
using namespace std;

class Teacher{
  
private:
    string name;
    vector<Student> studentsVect;
    
public:
    Teacher(string);
    
    void setName(string);
    string getName();
    
    void addStudent(Student student);
    void display();
};

#endif /* Teacher_hpp */
