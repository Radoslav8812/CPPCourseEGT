//
//  main.cpp
//  AirLineArray
//
//  Created by Rado on 15.01.24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int array[] = {0, 0, 0, 0, 0};
   
    cout << endl;
    
    while (true) {
        int index;
        cout << "Enter position (index from 0 to 9): ";
        cin >> index;
        
        if (index >= 0 && index < 5){
            int num;
            cout << "Enter value to add: " << endl;
            cin >> num;
            
            if (array[index] == 0){
                array[index] = num;
            }
            else{
                cout << "Change desired position!" << endl;
            }
            
            for (int i = 0; i < 5; i++){
                cout << array[i] << " : ";
            }
            cout << endl;
            
        }else{
            cout << "Invalid input!" << endl;
        }
    }
    return 0;
}
