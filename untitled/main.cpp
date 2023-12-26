//
//  main.cpp
//  SumEverydiagonal
//
//  Created by Rado on 13.12.23.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {

    int size;
    cout << "Enter the size of the square matrix: " << endl;
    cin >> size;

    int matrix[size][size];

    cout << "Enter " << size * size << " integers for the matrix:" << endl;

    // Populate matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Convert matrix of integers to matrix of characters
    char charMatrix[size][size];

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            charMatrix[i][j] = static_cast<char>(matrix[i][j]);
        }
    }

    // Print elements of the main diagonal in char matrix
    cout << "Elements of the main diagonal in char matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << charMatrix[i][i] << " ";
    }
    cout << endl;

    // Print elements of the secondary diagonal in char matrix
    cout << "Elements of the secondary diagonal in char matrix:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << charMatrix[i][size - 1 - i] << " ";
    }
    cout << endl;

    return 0;
}
