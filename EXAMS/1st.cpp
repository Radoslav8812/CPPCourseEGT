//
//  main.cpp
//  Store
//
//  Created by Rado on 19.11.23.
//

#include <iostream>
#include <string>
using namespace std;                                         // PSEUDO CODE EXPLANATION:
                                                             
struct InventoryItem {                                       // DEFINE a Structure with Properties, except class
    string itemName;                                         // DECLARE itemName: STRING
    int quantity;                                            // DECLARE quantity: INT
    int restockThreshold;                                    // DECLARE restockThreshold: INT
    int maxStock;                                            // DECLARE maxStock: INT
};

int main(int argc, const char * argv[]) {
    
    const int arraySize = 10;                                 //SET CONSTANT INT arraySize TO 10;
    InventoryItem storeInventory[arraySize] = {               //INITIALISE array OF InventoryItem(struct) with SIZE 10
        {"flour", 4, 5, 100},                                 //INITIALISE item AND quantities.
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
    
    for (int i = 0; i < arraySize; i++) {               //FOR EACH item IN storeInventory (10) DO
        // Изведете текущите наличности:
        cout << "Item Name ->  " << storeInventory[i].itemName << endl;		//PRINT product name OF i (current iteration)
        << "Quantity: " << storeInventory[i].quantity << endl          		//PRINT product quantity OF i (current iteration)
        << "Restock Threshold: " << storeInventory[i].restockThreshold << endl  //PRINT minimum value before reload stock OF i
        << "Max Stock: " << storeInventory[i].maxStock << endl;        		// PRINT max capacity of current stock OF i
        
        if (storeInventory[i].quantity < storeInventory[i].restockThreshold) { 		//IF curr product quantity is less THAN i < restockThreshold value THEN
            cout << "Restocking needed for: " << storeInventory[i].itemName << endl;		//PRINT "Restocking need for: " current product name AT I
            int quantityNeeded = storeInventory[i].maxStock - storeInventory[i].quantity;	//DECLARE quantityNeeded: INT and SET Value AFTER maxStock - quantity
            cout << "Quantity to restock: " << quantityNeeded << endl;				//PRINT quantityNeeded 
            
            if (storeInventory[i].quantity < storeInventory[i].maxStock) {			//IF quantity is less THAN i < maxStock value THEN
                //int currenStockDifferene = storeInventory[i].maxStock - storeInventory[i].quantity;
                cout << "Current product was reloaded with -> " << quantityNeeded << " pieces" << endl;   //PRINT "Current product was reloaded with -> " + quantityNeeded 
                storeInventory[i].quantity = storeInventory[i].maxStock;			          //SET quantity TO maxStock quantity
                cout << "Current product in stock after reload -> " << storeInventory[i].quantity << endl;  // PRINT  "Current product in stock after reload -> " + current product quantity;
            }
            cout << endl;   // PRINT new line;
            
        } else {  // OTHERWISE
            cout << "No restocking needed for: " << storeInventory[i].itemName << endl;  //PRINT "No restocking needed for: " + current item name;
        }
        
        cout << endl; // PRINT new line;
    }
    
    string itemToSearch; 	// DECLARE itemToSearch: string
    cout << "Enter a product that you looking for: " << endl; // PRINT "Enter a product that you looking for: " + new line;
    cin >> itemToSearch;      //SET itemToSearch FROM INPUT
    
    bool isFound = false;    //INITIALISE variable : boolean (with default value FALSE)
    int i = 0;   // SET counter: int (default value of 0)
    
    while (i < arraySize){   // WHILE counter < 10 DO
        if (storeInventory[i].itemName == itemToSearch){    //IF current item name IS EQUAL item to search THAN
            cout << "Your desired product is here!" << endl;   //PRINT "Your desired product is here!" + new line
            cout << "Current quantity for : "<< itemToSearch << " is " << storeInventory[i].quantity << endl;    //PRINT "Current quantity for : " + itemToSearch + " is " + store quantity
            cout << endl; // PRINT NEW LINE
            cout << "Enter desired quantity for this product (" << storeInventory[i].itemName << ")" << endl; ?? PRINT "Enter desired quantity for this product (" << current product name << ")" + new line
            int purchase; // DECLARE purchase: INT
            cin >> purchase;  //SET purchase FROM INPUT
            
            if (purchase <= storeInventory[i].quantity){. // IF purchase <= current item quantity THAN
                storeInventory[i].quantity -= purchase;   // SET current product quantity SUBTRACT BY purchase 
                cout << "Purchase successful! The remaining quantity in stock is -> " << storeInventory[i].quantity << " " << storeInventory[i].itemName << endl; // PRINT "Purchase successful! The remaining quantity in stock is -> " + current product quantity
            }
            
            isFound = true; // SET isFound = true;
            break; // Break While Loop
        }
        i++; // INCREMENT COUNTER WITH 1
    }
    
    if (!isFound) { // IF isFound = False THAN
        cout << "We can't complete your choise, becouse we don't have that product in stock!" << endl; // PRINT "We can't complete your choise, becouse we don't have that product in stock!" + new line
    }
    
    return 0;
}

