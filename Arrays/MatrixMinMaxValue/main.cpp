//
//  main.cpp
//  MatrixMinMaxValue
//
//  Created by Rado on 8.12.23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int rows;
    cout << "enter rows size: " << endl;
    cin >> rows;
    
    int cols;
    cout << "enter cols size: " << endl;
    cin >> cols;
    
    int arr[rows][cols];
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
    
    //Initialize min and max values;
    int min_value = arr[0][0];
    int max_value = arr[0][0];
    
    // Finding minimum and maximum values in the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] < min_value) {
                min_value = arr[i][j];
            }
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
            }
        }
    }
    
    cout << "Min valie is: " << min_value << endl;
    cout << "Max value is: " << max_value << endl;
    
    
    return 0;
}
