//
//  main.cpp
//  EqualRowsColsDiagonals
//
//  Created by Rado on 9.12.23.
//

#include <iostream>
using namespace std;

//const int MAX_SIZE = 3;

int main(int argc, const char * argv[]) {
     
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

// // check for correct size
// if (size <= 0 || size > MAX_SIZE) {
//     cout << "Invalid size!" << endl;
//     return 1;
// }
    
    int matrix[size][size];
    //fill matrix with valies
    cout << "Enter the elements of the square:" << endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }
    
    // sum first row of matrix
    int sum = 0;
    for (int j = 0; j < size; j++){
        sum += matrix[0][j];
    }
    
    bool isEqual = true;
    //check sum for next rolls
    for(int i = 1; i < size; i++){
        int currentRowSum = 0;
        for (int j = 0; j < size; j++){
            currentRowSum += matrix[i][j];
        }
        
        if (currentRowSum != sum){
            isEqual = false;
            break;
        }
    }
    // checking sum of columns if check above is valid
    if (isEqual){
        for (int j = 0; j < size; j++){
            int currentColSum = 0;
            for (int i = 0; i < size; i++){
                currentColSum += matrix[i][j];
            }
            
            if (currentColSum != sum){
                isEqual = false;
                break;
            }
        }
    }
    
    //check sum of first diagonal if check above valid
    if (isEqual){
        int diagonalSum = 0;
        for (int i = 0; i < size; i++){
            diagonalSum += matrix[i][i];
        }
        
        if (diagonalSum != sum){
            isEqual = false;
        }
    }
    
    if (isEqual){
        int diagonal2Sum = 0;
        for (int i = 0; i < size; i++){
            diagonal2Sum += matrix[i][size-1-i];
        }
        
        if (diagonal2Sum != sum){
            isEqual = false;
        }
    }
    
    if (isEqual){
        cout << "Eqial square! - > " << sum << endl;
    } else {
        cout << "Square is not equal!" << endl;
    }
    
    return 0;
}
