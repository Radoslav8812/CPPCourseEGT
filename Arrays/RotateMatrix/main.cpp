//
//  main.cpp
//  RotateMatrix
//
//  Created by Rado on 10.12.23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "enter matrix size" << endl;
    cin >> n;
    int matrix[n][n];
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }
    
    int resultMatrix[n][n];
    //rotate values: 90 degrees
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            resultMatrix[i][j] = matrix[n-j-1][i];
        }
    }
    
    cout << "Printing rotated matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
