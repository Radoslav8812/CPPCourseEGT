//
//  main.cpp
//  AverageSecondDiagonal
//
//  Created by Rado on 10.12.23.
//

/* Имате предварително въведени стойности на елементи в двумерен масив - естествени числа от интервала [0..100].
Да се състави програма на C++, чрез която се извеждат стойностите на елементите от двумерния масив по неговия неосновен (горе-дясно, долу-ляво) диагонал.
Да се изведе средната стойност на елементите в указания диагонал.
Пример:
1,2,3,4
5,6,7,8
9,10,11,12
13,14,15,16
Изход: 4,7,10,13 средна стойност 8.5 */

#include <iostream>
using namespace std;

const int ROWS = 4;
const int COLS = 4;

void printArray(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, const char * argv[]) {
    
    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    printArray(arr);
    
    // printing second diagonal + " " on console
    int current;
    for (int i = 0; i < ROWS; i++){
        current = arr[i][ROWS-1-i];
        cout << current << " ";
    }
    
    return 0;
}
