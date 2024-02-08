//
//  main.cpp
//  MapManipulation
//
//  Created by Rado on 18.01.24.
//

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <list>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n;
    cout << "Enter a range: ";
    cin >> n;
    
    map<int, int> numMap;
    
    for (int i = 0; i < n; i++){
        int value;
        cout << "enter a value to add: ";
        cin >> value;
        numMap.insert(make_pair(i + 1, value));
    }
    
    for (auto& pair: numMap){
        cout << "Key: " << pair.first << " Value: " << pair.second << endl;
    }
    
    
    return 0;
}
