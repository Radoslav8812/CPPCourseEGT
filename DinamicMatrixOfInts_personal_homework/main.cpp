//
//  main.cpp
//  DinamicMatrixOfInts
//
//  Created by Rado on 8.12.23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int size;
    cout << "Enter the size of the matrix: " << endl;
    cin >> size;
    int** arr = new int*[size];
    
    // create a two dimentional array (jagged array)
    for (int i = 0; i < size; i++){
        arr[i] = new int[size];
    }
    
    //filling the array with values
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cin >> arr[i][j];
        }
    }
    
    //printing array on console
    cout << "Elements of the array: " << endl;
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    
    // freeing allocated memory
    for (int i = 0; i < size; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
