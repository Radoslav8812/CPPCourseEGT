
#include <iostream>
using namespace std;

class AbstractEmployee{
    
   virtual void Promotion() = 0;
};

class Employee : AbstractEmployee{
    
protected:
    string Name;
    string Company;
    int Age;
    
public: 
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    
    void setAge(int age){
        if (age >= 18){
            Age = age;
        }
        else{
            cout << "Too Young" << endl;
        }
    }
    int getAge(){
        return Age;
    }
    
    void Promotion(){
        if (Age >= 40){
            cout << "Promoted!" << endl;
        }
        else{
            cout << "No promotion atm!" << endl;
        }
    }

    void Introduction(){
        cout << "Name -> " << Name << ", Company -> " << Company << ", Age -> " << Age << endl;
    }
};

class SoftwareEngineer : public Employee{
public:
    string ProgramingLanguage;
    
public:
    SoftwareEngineer(string name, string company, int age, string programingLanguage): Employee(name, company, age){
        ProgramingLanguage = programingLanguage;
    }
    
    void setProgramingLanguage(string programingLanguage){
        ProgramingLanguage = programingLanguage;
    }
    string getProgramingLanguage(){
        return ProgramingLanguage;
    }
    
   // void Promotion(){
   //     if (Age >= 30){
   //         cout << "Promoted!" << endl;
   //     }
   //     else{
   //         cout << "No promotion atm!" << endl;
   //     }
   // }
   //
   // void Introduction(){
   //     cout << "Name -> " << Name << ", Company -> " << Company << ", Age -> "
   //     << Age << ", Programing Langiage -> "<< ProgramingLanguage << endl;
   // }
};

int main(int argc, const char * argv[]) {
    
    Employee employee1 = Employee("Spiro", "EGT", 35);
    employee1.Introduction();
    employee1.Promotion();
    cout << endl;
    Employee Employee2 = Employee("Elon", "SpaceX", 50);
    Employee2.Introduction();
    Employee2.Promotion();
    cout << endl;
    Employee Employee3 = Employee("Some", "Nothing", 18);
    Employee3.Introduction();
    Employee3.Promotion();
    Employee3.setAge(12);
    cout << endl;
    
    SoftwareEngineer dev1 = SoftwareEngineer("Rado", "Egt", 35, "C++");
    dev1.Introduction();
    dev1.Promotion();
    
    
    
    return 0;
}


