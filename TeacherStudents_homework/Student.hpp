//
//  Student.hpp
//  TeacherStudents
//
//  Created by Rado on 17.01.24.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Student{
  
private:
    string name;
    
public:
    Student(string);
    
    void setName(string);
    string getName();
    
};
#endif /* Student_hpp */
