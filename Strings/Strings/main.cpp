//
//  main.cpp
//  Strings
//
//  Created by Rado on 4.01.24.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

void ReversePrinting(string input){
    // reverse current string via build in method which replace standard reverse forloop:
    reverse(input.begin(), input.end());
    // print reversed string on console:
    cout << "reversed result -> " << input << endl;
}

void VowelsCountPrint(string input){
    // declare a "map" (key-value pairs):
    map<char, int> vowelsMap;
    
    for (const auto& c : input){
        
        char currentSymbol = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowelsMap[currentSymbol]++;
        }
    }
    
    for (const auto& vowel : vowelsMap){
        cout << "vowel -> '" << vowel.first << "' is " << vowel.second << " times founded." <<endl;
    }
}

int main(int argc, const char * argv[]) {
    // 1)  Writer program which read a string from console and print it in reverse order as result:
    
    string input;
    // get the string from console:
    cout << "Enter your string: " << endl;
    getline(cin, input);
    
    ReversePrinting(input);
   
    cout << endl;
    
    // 2) Write program which read a string from console and find every vowel and how many times vowel of this type is founded:
    
    cout << "Enter your symbols: " << endl;
    getline(cin, input);
    
    VowelsCountPrint(input);
    
    return 0;
}
