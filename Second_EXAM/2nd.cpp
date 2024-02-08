#include <iostream>
#include <string>
#include <vector>
using namespace std;

//DECLARE Structure to hold information via following properties:
struct RepairRecord {
    string licensePlate;
    string ownerName;
    string repairDescription;
    double repairCost;
    vector<string> partsUsed;
    int laborHours;
};
// Create a function with given parameters which add records to vector.
void addRepairRecord(vector<RepairRecord>& records, string licensePlate, string ownerName, string repairDescription, double repairCost, vector<string>& partsUsed, int laborHours) {

    //Create new isntance of our structure
    RepairRecord newRecord;
    // Pass parameters with current valies
    newRecord.licensePlate = licensePlate;
    newRecord.ownerName = ownerName;
    newRecord.repairDescription = repairDescription;
    newRecord.repairCost = repairCost;
    newRecord.partsUsed = partsUsed;
    newRecord.laborHours = laborHours;

    //Add "newRecord" to the vector of structure - records
    records.push_back(newRecord);
}
//Declare a function to print our repair records
void displayRepairRecords(const vector<RepairRecord>& records) {

    cout << "Repair Records : ";
    //Iterating through every element in our vector
    for (const auto &record : records) {
        //Print on console every record separate by new line
        cout << "License Plate: " << record.licensePlate << endl;
        cout << "Owner's Name: " << record.ownerName << endl;
        cout << "Repair Description: " << record.repairDescription << endl;
        cout << "Repair Cost: $" << record.repairCost << endl;
        cout << "Parts Used:" << endl;

        //Iterating through every part in record -> used parts
        for (const auto &part : record.partsUsed) {
            cout << " " << part << endl;
        }
        //Print hours which repair cost
        cout << "Labor Hours: " << record.laborHours << endl;
        cout << endl;
    }
}

// Declare a function to search a record via license plate
RepairRecord* searchByLicensePlate(const string& licensePlate, vector<RepairRecord>& records) {
    //For Loop through each RepairRecord in the vector
    for (auto& record : records) {
        // Check if current plate match provided license plate
        if (record.licensePlate == licensePlate) {
            // if match -> return a pointer
            return &record; // Return pointer to the found record
        }
    }
    return nullptr; // Return nullptr if no record with given license number
}

int main() {
    // vector which store records
    vector<RepairRecord> records;

    //declare integer number for user to make choises
    int choice;
    //declare string for searching
    string searchPlate;

    //Declare Do- While loop
    do {
        // Print a menu for our user
        cout << " USER MENU : ";
        cout << "1. Add a repair record " << endl;
        cout << "2. Display all records " << endl;
        cout << "3. Search for a record " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your choice: ";
        //User enter his choise
        cin >> choice;
        // Clear newline from buffer
        cin.ignore();

        //adding a repair record
        if (choice == 1) {
            //declare variables for the record
            string licensePlate;
            string ownerName;
            string repairDescription;
            double repairCost;
            vector<string> partsUsed;
            int laborHours;

            //filling variables above via console input
            cout << " Car license plate number: ";
            getline(cin, licensePlate);

            cout << " Car owner's name: ";
            getline(cin, ownerName);

            cout << " Repair description: ";
            getline(cin, repairDescription);

            cout << " Repair cost: $";
            cin >> repairCost;
            // Clear newline from buffer
            cin.ignore();

            // Declare variable part: string
            string part;
            cout << " Parts used : " << endl;

            //declare endless loop
            while (true) {
                cout << " ";
                //get a part value from console
                getline(cin, part);
                cout << " enter done to finish " << endl;
                //IF statement which stop our endless loop via command
                if (part == "done") {
                    break;
                }
                //add the part to the end of our vector
                partsUsed.push_back(part);
            }

            cout << " Enter labor hours: ";
            // Declare labor hours
            cin >> laborHours;
            // Clear newline from buffer
            cin.ignore();

            //Call our method and populate it with the given values
            addRepairRecord(records, licensePlate, ownerName, repairDescription, repairCost, partsUsed, laborHours);
            //if choise is equal to 2 - print our records
        } else if (choice == 2) {
            displayRepairRecords(records);
            //if choise is equal to 3 - search for existing license plate
        } else if (choice == 3) {
            cout << " License plate to search: ";
            //get a desired license plate from console
            getline(cin, searchPlate);
            {
                //searchig for record if exist, by entered license plate
                RepairRecord* foundRecord = searchByLicensePlate(searchPlate, records);

                //IF the record exist
                if (foundRecord != nullptr) {
                    //printing on console current information :
                    cout << "Record found for License Plate '" << searchPlate << "': " << endl;
                    cout << "Owner's Name: " << foundRecord->ownerName << endl;
                    cout << "Repair Description: " << foundRecord->repairDescription << endl;
                    cout << "Repair Cost: $" << foundRecord->repairCost << endl;
                } else {
                    //If not exist -> message for no record found
                    cout << "No record found for License Plate '" << searchPlate << "'" << endl;
                }
            }
            //if choise = 4 we exit from the program and print message on console
        } else if (choice == 4) {
            cout << "Exiting the program.";
        } else {
            // if choise is not between 1-4, we send message for invalid choise
            cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 4);

    return 0;
}