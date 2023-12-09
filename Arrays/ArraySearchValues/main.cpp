//
//  main.cpp
//  ArraySearchValues
//
//  Created by Rado on 9.12.23.
//

//Имате двумерен масив от естествени числа от интервала [0..100], чийто стойности за въведени предварително.
//От клавиатурата се въвежда естествено число v в същия интервал.
//Да се състави програма на C++, чрез която се отпечатват двойките индекси на всички елементи от масива, чиято стойност по-малка от v.

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
    
    vector<int>vect;
    
    int v;
    cout << "enter value of V: " << endl;
    cin >> v;
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (arr[i][j] < v){
                vect.push_back(arr[i][j]);
            }
        }
    }
    
    for (int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
    
    return 0;
}
