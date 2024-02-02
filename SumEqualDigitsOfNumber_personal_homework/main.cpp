//
//  main.cpp
//  SumEqualDigitsOfNumber
//
//  Created by Rado on 12.12.23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "enter size: " << endl;
    cin >> n;
    int arr[n];
    int sum = 0;
    int count = 0;
    int num;
    
    for (int i = 0; i < n; i++){
        cin >> num;
        arr[i] = num;
    }
    
    for (int i = 0; i < n; i++){
        int firstDigit = arr[i] / 1000;
        int secondDigit = (arr[i] / 100) % 10;
        int thirdDigit = (arr[i] / 10) % 10;
        int fourthDigit = arr[i] % 10;

        if (firstDigit == secondDigit && firstDigit == thirdDigit && firstDigit == fourthDigit){
            sum += arr[i];
            count++;
        }

    }
    
    if (sum == 0){
        cout << "there is no equal numbers!" << endl;
    }
    
    cout << "Number match => " << count << endl;
    cout << "the sum of all numbers with length of 4 and equal digits inside => " << sum << endl;
    
    return 0;
}
