//
//  main.cpp
//  FilesCPP
//
//  Created by Rado on 27.01.24.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    /*
    // create file.
    fstream file;
    
    
    //        name of file /// output
    file.open("Radoslav.txt", ios:: out);
    
    if (file.is_open()){
        
        // file is like cout here
        file << "Name: Radoslav Bogdanov " << endl;
        
        // close file
        file.close();
    }
    //                       append to file
    file.open("Radoslav.txt", ios:: app);
    if (file.is_open()){
        // file is like cout here
        file << "Live:  Sofia , Center " << endl;
        file.close();
    }
    */
    
    
    
    // reading in ide console:
    
    fstream file;
    file.open("Radoslav.txt", ios:: in);
    if (file.is_open()){
        string line;
        
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    
    
    return 0;
}
