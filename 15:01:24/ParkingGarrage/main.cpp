//
//  main.cpp
//  ParkingGarrage
//
//  Created by Rado on 15.01.24.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
// Must create for loop for many user input !
int ParkingTime(int hours){
    
    double fee = 2.00;
    double totalPayment = 0;
    
   
    //---------------------------------------
    if (hours <= 3){
        cout << "Customer must pay 2.00." << endl;
    }
    else if (hours > 24){
        cout << "Out of access" << endl;
    }
    else if (hours == 24){
        cout << "Customer must pay 10.00" << endl;
    }
    else if (hours > 3){
        double totalPayment = fee + ((hours - 3) * 0.50);
        if (totalPayment > 10){
            totalPayment = 10;
        }
        cout << "Customer must pay : " << totalPayment << endl;
    }
    
    return totalPayment;
}


int main(int argc, const char * argv[]) {
    
    int userCount;
    cout << "Enter the number of users: ";
    cin >> userCount;

    vector<int> usersVect;

    for (int i = 0; i < userCount; i++) {
        int value;
        cout << "Enter hours for customer " << i + 1 <<": ";
        cin >> value;
        usersVect.push_back(value);
    }

    for (int i = 0; i < usersVect.size(); i++) {
        ParkingTime(usersVect[i]);
    }
    
    return 0;
}
