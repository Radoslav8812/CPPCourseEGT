//
//  MaleCustomer.cpp
//  FitnessCenter
//
//  Created by Rado on 18.01.24.
//

#include "MaleCustomer.hpp"
#include <iostream>
#include <string>

using namespace std;

MaleCustomer:: MaleCustomer (string name) : Customer (name, 'M'){
    
}

void MaleCustomer:: showInfo(){
    cout << "Male customer -> ";
    Customer:: showInfo();
}
