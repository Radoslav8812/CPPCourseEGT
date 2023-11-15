//
//  main.cpp
//  HomeWork11.11.23
//
//  Created by Rado on 11.11.23.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    int pizzas = 14.0; // total pizza eaten
    double wholePrice = pizzas * 7.00; // price for all pizzas
    double discount = (wholePrice / 2) * 0.20; // discount for 1/2 of pizzas
    double resultWithDisc = wholePrice - discount; //total paid with discount
    double separateResult = resultWithDisc / 2; // separate payment for both
    
    double AngelSalary = 1800.00;
    double BorislavaSalary = 4000.00;
    double wholeBudget = AngelSalary + BorislavaSalary; // total money from both salaries.
    //double sharedBugdet = wholeBudget / 2;
    
    AngelSalary -= separateResult;
    // for every 1/3 extra piece of pizza which he eat.
    double AngelAdditional = 2.33 * 7; // (1/3 piece of pizza * 7 days) additional payment from Angel, becouse of eating 1/3 pizza 7 times.
    AngelSalary -= AngelAdditional;
    double AngelTotalPayment = separateResult + AngelAdditional;
    
    BorislavaSalary -= separateResult;
    BorislavaSalary += AngelAdditional;
    double BorislavaTotalPayment = separateResult - AngelAdditional;
    
    // Different solve
    cout << "Result after 50/50 without role of salaries : " << endl;
    cout << "Total payment from Angel -> " << AngelTotalPayment << endl;
    cout << "Total payment from Borislava -> " << BorislavaTotalPayment << endl;
    
    cout << "Example, which depend on salaries : " << endl;
    double salaryDiff = BorislavaSalary / AngelSalary; // 2.88 times Borislava salary is bigger.
    
    cout << "Angel total payment, depend on both salaries: " << endl;
    double AngelRess = (AngelTotalPayment / salaryDiff) + (AngelAdditional / salaryDiff);
    cout << AngelRess << endl;
    
    cout << "Borislava total payment, depend on both salaries: " << endl;
    double BorislavaRess = (resultWithDisc - AngelRess); 
    cout << BorislavaRess << endl;
    
    return 0;
}
