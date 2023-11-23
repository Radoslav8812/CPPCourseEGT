

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int size; // цяло число
    cin >> size; // потребителя въвежда числото за размера на масива
    int* array = new int[size]; // създаваме масив в динамичната памет
    
    for (int i = 0; i < size; i++){ // въртим цикъл до въведения размер (примерно 5)
        cout << "enter a digit to add" << endl;
        cin >> array[i]; // въвеждаме по 1 число на всяка итерация от конзолата (5, 4, 3, 2, 1)
    }
    cout << endl;
    
    for (int i = 0; i < size; i++){ // въртим нов цикъл, след като предишния е вкарал стойностите в масива
        cout << *(array+i) << " "; // изкарваме посредством пойнтер всяка стойност - 5 4 3 2 1
    }
    
    delete[]array; // освобождаваме мястото в паметта
    array = NULL; // освобождаваме поинтера
}
