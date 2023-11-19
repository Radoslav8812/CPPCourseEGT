
#include <iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;
    
public: 
    Employee(string name, string company, int age){
    Name = name;
    Company = company;
    Age = age;
    }
    
    void Introduction(){
        cout << "Name -> " << Name << ", Company -> " << Company << ", Age -> " << Age << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    Employee employee1 = Employee("Spiro", "EGT", 35);
    employee1.Introduction();
    
    return 0;
}


