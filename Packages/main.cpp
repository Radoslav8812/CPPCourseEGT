//
//  main.cpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

/*Use the Package inheritance hierarchy created in Lecture
“Inheritance” to create a program that displays the address
information and calculates the shipping costs for several
Packages.
The program should contain a vector of Package pointers to
objects of classes TwoDayPackage and OvernightPackage.
Loop through the vector to process the Packages
polymorphically.
For each Package, invoke get functions to obtain the
address information of the sender and the recipient, then
print the two addresses as they would appear on mailing
labels.
Also, call each Package's calculateCost member function
and print the result.
Keep track of the total shipping cost for all Packages in the
vector, and display this total when the loop terminates.
*/


#include <iostream>
#include <string>
#include <vector>

#include "Package.hpp"
#include "TwoDayPackage.hpp"
#include "OvernightPackage.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<Package*> packagesVect;
    
    //(string senderName, string senderAddress, string receiverName, string ReceiverAddress , double weight, double cost, double twoDayTax)
    packagesVect.push_back(new TwoDayPackage("Radoslav", "Sofia - Nadejva 2", "Spiridon", "Pernik - Baikusheva mahala", 12.5, 100, 5));
    packagesVect.push_back(new OvernightPackage("Hasan", "Plovdiv - Old Town", "Rado", "Sofia - Nadejda", 50, 50, 20));

    
    double totalCostShipping = 0;
    
    for (auto& pack : packagesVect){
        
        cout << "Sender Address: " << pack -> getSenderAddress() << endl;
        cout << "Receiver Address: " << pack -> getReceiverAddress() << endl;
       
        //every single package cost
        double cost = pack -> calculateCost();
        cout << "Shipping Cost: " << cost << endl;
        
        
        //total cost
        totalCostShipping += cost;
        
        cout << "########################################################" << endl;
    }
    
    cout << "Overall cost for whole shipping: " << totalCostShipping << endl;
    
    return 0;
}
