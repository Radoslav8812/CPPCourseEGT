//
//  main.cpp
//  PrimaryDiagonalPrint
//
//  Created by Rado on 10.12.23.
//
/* Имате предварително въведени стойности на елементи в двумерен масив - естествени числа от интервала [0..100].
 Да се състави програма на C++, чрез която се изведат стойностите на елементите в двумерен масив по неговия основен, главен диагонал - диагонала горе-ляво - долу-дясно.
 Да се изведе стойността на най-големия елемент в указания диагонал.
 Пример:
 1,2,3,4
 5,6,7,8
 9,10,11,12
 13,14,15,16
 Изход: 1, 6, 11,16.
 Максимална стойност на елемент 16*/

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
    
    // printing primary diagonal + " " on console
    int current;
    int size = 4;
    int maxValue[size];
    int sum = 0;
    int times = 0;
    
    for (int i = 0; i < ROWS; i++){
        current = arr[i][i];
        sum += current;
        times++;
        maxValue[i] = current;
        cout << current << " ";
    }
    
    cout << endl;
    int maxElement = maxValue[0];
    for (int i = 1; i < size; i++){
        if (maxValue[i] > maxElement){
            maxElement = maxValue[i];
        }
    }
    cout << "max element : " << maxElement << endl;
    cout << "sum of elements: "<< sum << endl;
    cout << "average sum: " << sum * 1.0 / times * 1.0 << endl;
    return 0;
}
