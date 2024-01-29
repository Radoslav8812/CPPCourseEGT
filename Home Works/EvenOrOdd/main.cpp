//
//  main.cpp
//  EvenOrOdd
//
//  Created by Rado on 29.01.24.
//

/*Задача 1: Напише следния код:
 
 Напишете програма на С++, която:

 Използва въведени от потребител цели числа

 Проверява дали числото е четно или нечетно

 Ако числото е четно, на екрана се извежда “even”, ако е нечетно – “odd”*/


#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "enter the desired range of digits: " << endl;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        
        if (num % 2 == 0){
            cout << "even number -> " << num;
        }
        else{
            cout << "odd number -> " << num;
        }
        
        cout << endl;
    }
    
    return 0;
}
