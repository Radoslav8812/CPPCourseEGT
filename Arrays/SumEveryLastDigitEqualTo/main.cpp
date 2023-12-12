//
//  main.cpp
//  SumEveryLastDigitEqualTo
//
//  Created by Rado on 12.12.23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cout << "enter size: " << endl;
    cin >> n;
    int num;
    int sum = 0;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        cin >> num;
        arr[i] = num;
        
        if (arr[i] % 10 == 4){
            sum += num;
        }
    }
    cout << endl;
    cout<< "sum :" << sum << endl;
    
    return 0;
}
