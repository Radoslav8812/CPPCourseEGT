//
//  main.cpp
//  DiamondStructureOOP
//
//  Created by Rado on 30.01.24.
//

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Mammal.hpp"
#include "Bird.hpp"
#include "Pinguin.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    Pinguin pinguin ("Pingy", "Antarctica", "Fish", 1, 1);

    pinguin.Print();
    pinguin.Eat();
    pinguin.Swim();
    pinguin.Run();
    pinguin.Fly();
    pinguin.Sound();
    pinguin.Sleep();

    if (pinguin.IsHungry()) {
        
        cout << "Pingy is hungry!" << endl;
    } else {
        cout << "Pingy is not hungry." << endl;
    }

    return 0;
}
