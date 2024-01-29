//
//  main.cpp
//  AnimalsPolymorphism
//
//  Created by Rado on 29.01.24.
//

#include <iostream>
#include <vector>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    vector<Animal*> animalsVect;
    
    animalsVect.push_back(new Dog("Rocky", "Black"));
    animalsVect.push_back(new Dog("Blacky", "White"));
    animalsVect.push_back(new Cat("Dobrina", "Arlekin"));
    animalsVect.push_back(new Cat("Spiridon", "Dark Gray"));
    
    for (auto& animal : animalsVect) {
        
        cout<< "Animal overview: ";
        animal -> Print();
        
        if (Dog* dog = dynamic_cast<Dog*>(animal)) {
            
            cout << "Dog specific: " << dog -> Sound() << endl;
        }
        else if (Cat* cat = dynamic_cast<Cat*>(animal)) {
            
            cout << "Cat specific: " << cat -> Sound() << endl;
        }
        
        cout << endl;
    }
         
    for (auto& animal : animalsVect) {
        delete animal;
    }
    
    return 0;
}
