//
//  main.cpp
//  Store
//
//  Created by Rado on 19.11.23.
//

#include <iostream>
#include <string>
using namespace std;

struct InventoryItem {
    string itemName;
    int quantity;
    int restockThreshold;
    int maxStock;
};

int main(int argc, const char * argv[]) {
    
    const int arraySize = 10;
    InventoryItem storeInventory[arraySize] = {
        {"flour", 4, 5, 100},
        {"eggs", 2, 20, 1000},
        {"milk", 3, 10, 150 },
        {"coca cola", 40, 50, 1500},
        {"fanta", 44, 50, 750},
        {"yogurt", 50, 10, 200},
        {"chicken meat", 200, 50, 500},
        {"totamoes", 50, 10, 200},
        {"bananas" , 100, 20, 300},
        {"apples", 250, 50, 500}
    };
    
    
    //for (int i = 0; i < arraySize; i++) {
    //
    //    cout << "Enter item name: ";
    //    cin >> storeInventory[i].itemName;
    //
    //    cout << "Enter quantity: ";
    //    cin >> storeInventory[i].quantity;
    //
    //    cout << "Enter restock threshold: ";
    //    cin >> storeInventory[i].restockThreshold;
    //
    //    cout << "Enter max stock: ";
    //    cin >> storeInventory[i].maxStock;
    //
    //    cout << endl;
    //}
    
    for (int i = 0; i < arraySize; i++) {
        // Изведете текущите наличности:
        cout << "Item Name ->  " << storeInventory[i].itemName << endl
        << "Quantity: " << storeInventory[i].quantity << endl
        << "Restock Threshold: " << storeInventory[i].restockThreshold << endl
        << "Max Stock: " << storeInventory[i].maxStock << endl;
        
        if (storeInventory[i].quantity < storeInventory[i].restockThreshold) {
            cout << "Restocking needed for: " << storeInventory[i].itemName << endl;
            int quantityNeeded = storeInventory[i].maxStock - storeInventory[i].quantity;
            cout << "Quantity to restock: " << quantityNeeded << endl;
            
            if (storeInventory[i].quantity < storeInventory[i].maxStock) {
                //int currenStockDifferene = storeInventory[i].maxStock - storeInventory[i].quantity;
                cout << "Current product was reloaded with -> " << quantityNeeded << " pieces" << endl;
                storeInventory[i].quantity = storeInventory[i].maxStock;
                cout << "Current product in stock after reload -> " << storeInventory[i].quantity << endl;
            }
            cout << endl;
            
        } else {
            cout << "No restocking needed for: " << storeInventory[i].itemName << endl;
        }
        
        cout << endl;
    }
    
    string itemToSearch;
    cout << "Enter a product that you looking for: " << endl;
    cin >> itemToSearch;
    
    bool isFound = false;
    int i = 0;
    
    while (i < arraySize){
        if (storeInventory[i].itemName == itemToSearch){
            cout << "Your desired product is here!" << endl;
            cout << "Current quantity for : "<< itemToSearch << " is " << storeInventory[i].quantity << endl;
            cout << endl;
            cout << "Enter desired quantity for this product (" << storeInventory[i].itemName << ")" << endl;
            int purchase;
            cin >> purchase;
            
            if (purchase <= storeInventory[i].quantity){
                storeInventory[i].quantity -= purchase;
                cout << "Purchase successful! The remaining quantity in stock is -> " << storeInventory[i].quantity << " " << storeInventory[i].itemName << endl;
            }
            
            isFound = true;
            break;
        }
        i++;
    }
    
    if (!isFound) {
        cout << "We can't complete your choise, becouse we don't have that product in stock!" << endl;
    }
    
    return 0;
}
