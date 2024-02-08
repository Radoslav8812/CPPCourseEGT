//
//  main.cpp
//  XML_Lecture
//
//  Created by Rado on 7.02.24.
//

#include "pugixml.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace pugi;

int main(int argc, const char * argv[]) {
    
    xml_document doc;
    
    if(!doc.load_file("employee.xml")){
        cout << "error" << endl;
        return -1;
    }
    
    xml_node empls = doc.child("EmployeesData").child("Employees");
    
    for (xml_node_iterator it = empls.begin(); it != empls.end(); it++){
        cout << "Employee: " << endl;
        
        for (xml_attribute_iterator ait = it -> attributes_begin(); ait != it -> attributes_end(); ait++){
            cout << "  " << ait -> name() << " = "<< ait -> value() << endl;
        }
    }
    
    
    return 0;
}
