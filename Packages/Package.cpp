//
//  Package.cpp
//  Packages
//
//  Created by Rado on 3.02.24.
//

#include "Package.hpp"
#include <iostream>

Package:: Package(string senderName, string senderAddress, string receiverName, string ReceiverAddress, double weight, double cost) {
    
    setSenderName(senderName);
    setSenderAddress(senderAddress);
    setReceiverName(receiverName);
    setReceiverAddress(ReceiverAddress);
    setWeight(weight);
    setCost(cost);
    
}

void Package:: setSenderName(string senderName){
    this -> senderName = senderName;
}
string Package:: getSenderName(){
    return this-> senderName;
}

void Package:: setSenderAddress(string senderAddress){
    this -> senderAddress = senderAddress;
}
string Package:: getSenderAddress(){
    return this-> senderAddress;
}

void Package:: setReceiverName(string receiverName){
    this -> receiverName = receiverName;
}
string Package:: getReceiverName(){
    return this -> receiverName;
}

void Package:: setReceiverAddress(string reveiverAddress){
    this -> receiverAddress = reveiverAddress;
}
string Package:: getReceiverAddress(){
    return this -> receiverAddress;
}

void Package:: setWeight(double weight){
    this -> weight = weight;
}
double Package:: getWeight(){
    return this -> weight;
}

void Package:: setCost(double cost){
    this -> cost = cost;
}
double Package:: getCost(){
    return this -> cost;
}

double Package:: calculateCost(){
    
    return (this -> weight * this -> cost) * 0.05;
}

void Package:: print(){
    
    cout << "Sender name: " << this -> getSenderName() << ", Sender Adress: " << getSenderAddress() << " / , Receiver Name: " << this -> getReceiverName() << ", Receiver Address: " << this -> getReceiverAddress() << "/ , Package Weight: " << this -> getWeight() << ", Package cost: " << this -> getCost() << " ";
}

Package:: ~Package(){
    
};
