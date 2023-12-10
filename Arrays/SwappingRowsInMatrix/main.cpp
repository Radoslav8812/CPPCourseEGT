//
//  main.cpp
//  SwappingRowsInMatrix
//
//  Created by Rado on 10.12.23.
//

#include <iostream>
using namespace std;

const int ROWS = 6;
const int COLS = 5;

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[ROWS][COLS] = {
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55},
        {61, 62, 63, 64, 65}
    };

    printArray(arr);

    // Swap rows 1 and 2 by a third variable
    for (int j = 0; j < COLS; ++j) {
        int temp = arr[0][j];
        arr[0][j] = arr[1][j];
        arr[1][j] = temp;
    }

    // Swap rows 3 and 4 by addition
    for (int j = 0; j < COLS; ++j) {
        arr[2][j] = arr[2][j] + arr[3][j];
        arr[3][j] = arr[2][j] - arr[3][j];
        arr[2][j] = arr[2][j] - arr[3][j];
    }

    // Swap rows 5 and 6 by multiplication
    for (int j = 0; j < COLS; ++j) {
        arr[4][j] = arr[4][j] * arr[5][j];
        arr[5][j] = arr[4][j] / arr[5][j];
        arr[4][j] = arr[4][j] / arr[5][j];
    }

    cout << "Result after swapping : " << endl;
    printArray(arr);

    return 0;
}
