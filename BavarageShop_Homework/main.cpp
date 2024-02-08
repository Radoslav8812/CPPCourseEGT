//
//  main.cpp
//  BavarageShop
//
//  Created by Rado on 3.02.24.
//

/*Drinks
Alcoholic; NoAlcoholic
Food: Tea Coffee Biscuits Chocolates, Nuts
 
Drinks
Name. ; Price. ; Quantity
Type (wine, gin, whiskey, water, juice, ice tea, -)
Print()
 
-NoAlcoholic
Liters ; CityTax
CalculatePrice() > Quantity * Price + CityTax
 
-Alcoholic
Volume ; Тах (акциз)
CalculatePrice() > Quantity * (Price * Tax)
 
Потребител - username, списк/вектор от порьчки
Порьчка: - напитки, дата, крайна сума
Метод за извеждане на инфо колко напитки са продадени от всеки вид
Метод който врща най-добрият клиент/клиенти (с най-скьла порьчка)
Метод който врща всички клиенти с порьчки съдржащи напитка от даден тип
Метод който врыща 10-те клиенти с порьчки сьдьржащи напитка от даден тип
с оборот на порьчката им над дадена сума */


#include <iostream>
#include <string>
#include <vector>

#include "Order.hpp"
#include "Controller.hpp"
#include "NonAlchoholicDrink.hpp"
#include "AlchoholicDrink.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
   
    Order order1("Siro", "2024-02-02", 25.0);
    order1.AddDrink(new NonAlchoholicDrink("Tea", 2.5, 2 , 2, 2));
    order1.AddDrink(new AlchoholicDrink("Wine", 10.0, 1, 2, 2));

    Order order2("Spiro", "2024-02-03", 35.0);
    order2.AddDrink(new NonAlchoholicDrink("Coffee", 3.0, 1, 2, 2));
    order2.AddDrink(new AlchoholicDrink("Wine", 15.0, 1, 2 , 3));

    Order order3("Spiridon", "2024-02-03", 20.0);
    order3.AddDrink(new NonAlchoholicDrink("Juice", 4.0, 3, 5, 6));

    Controller controller;
    controller.addOrder(order1);
    controller.addOrder(order2);
    controller.addOrder(order3);

    controller.printDrinkInfo();
    
    cout << endl;
    for (auto& order : controller.ordersVect){
        for (auto& drink : order.drinksVect){
            drink -> print();
            cout <<" ---------------------------------- " << endl;
        }
    }

    // best customer
    Order bestCustomer = controller.getBestCustomer();
    cout << "Best Customer: ";
    bestCustomer.orderInfoPrint();
    cout <<"---------------------------------- " << endl;

    // orders by drink type
    vector<Order> ordersByDrinkType = controller.ordersByDrinkType("Wine");
    cout << "Orders containing Wine:" << endl;
    
    for (auto& order : ordersByDrinkType) {
        order.orderInfoPrint();
    }
    
    return 0;
}
