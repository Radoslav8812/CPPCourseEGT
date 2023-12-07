//
//  main.cpp
//  arrayOfStrings
//
//  Created by Rado on 7.12.23.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    int arraySize;
    cout << "Enter desire size of the array: ";
    cin >> arraySize;

    string str;
    string array[arraySize];
    
    vector<int> vect;
    int count = 0;

    cout << "Enter " << arraySize << " strings with 3 digits each:" << endl;

    for (int i = 0; i < arraySize; ++i) {
        cin >> str;
        if (str.length() == 3) {
            array[i] = str;
        } else {
            cout << "Enter a string with 3 digits." << endl;
            i--; // Decrement i to reuse current iteration
        }
    }

    for (int i = 0; i < arraySize; ++i) {
        if (array[i].length() == 3) {
            int sum = 0;
            for (char digit : array[i]) {
                sum += (digit - '0');
            }
            if (sum == 9) {
                int num = stoi(array[i]);
                vect.push_back(num);
                count++;
            }
        }
    }

    cout << "Founded digits with sum of 9: ";
    for (int num : vect) {
        cout << num << " ";
    }
    cout << endl;
    
    cout << count <<" numbers we found!" << endl;

    return 0;
}
