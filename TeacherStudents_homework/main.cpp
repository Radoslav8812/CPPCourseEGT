//
//  main.cpp
//  TeacherStudents
//
//  Created by Rado on 17.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include "Student.hpp"
#include "Teacher.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Teacher teacher("Spiridon");

    Student student1("Spiro");
    Student student2("Kiro");
    Student student3("Miro");

    teacher.addStudent(student1);
    teacher.addStudent(student2);
    teacher.addStudent(student3);

    teacher.display();
    
    return 0;
}
