//
//  main.cpp
//  QuestionsAndAnswers
//
//  Created by Rado on 31.01.24.
//

1) Syntax Explanation: Describe whaw the following line of C__ code does:  int* ptr = &var;

    -"int" is a type of the variable;
    -"*" dereference - getting value;
    -"ptr" name of the variable;
    -"&" it access the adress in memory of the variable;
    -"var" its the name of that adress;

    - Израза трябва да е поинтер от тип инт по стойност, който взима тази стойност от адреса, който сочи.

2) Concept Clarification: Explain the difference between a while loop and a do-while loop in C++.

    -while loop - do something while condition, if contion is not right , it can iterate 0 times(0 loops).
    -do while - it also depend on condition, but iterate at least one time.

while - цикъл, който проверява дадено условие се върти до него. Може да върти до безкрай (while (true)), ако не се спре и условието е вярно. Може и изобщо да не му хареса условието и да не влезем в цикъла. / Loop that check a given condition. it can loop infinitum , if condition is true every iteration and we must break to stop this. If loop not like the condition , it can be skipped.

    do while- цикъл, който проверява дадено условие, но за разлика от горния, винаги се изпълнява поне 1 път, преди проверката , която е накрая. / Loop that check a given condition, but the difference betwenn this and above one is: this do-while make 1 iteration every time before check the condition.

3) Code Analisis: Given a snippet of C++ code containing a for loop, explain what the loop does, including how many times it iterates and why.
for example:

for (int i = 0; i < 5; i++){
    cout << i << endl;
}

this loop iterate from index 0 to 4 and print every digit of that index on console (0, 1, 2, 3 , 4)

i = 0 start index;
i < 5 (end index: 4);
i++ increment with 1 per loop;

Стандартен фор луп, който се върти от индекс 0 до индекс 4. На всяка итерация увеличаваме индекса с 1, докато не стане 5. на 5 сравнява дали 5 < 5, което не е вярно и се прекратява. принтира индексите от 0 до 4.

4) Function Usage: Write about how functions prevent code duplication and give an example of a simple c++ function that calculates a square on numbers:

double Square(double value) {  - global function outside the main method, with one parameter and return double as result;
                               - глобална функция извън "меин метода", приема един параметър и връща умножението на 2 реални числа.
    return value * value;
}
#include <iostream>
using namespace std;

int main{
    int n; - integer number; / декларираме цяло число
    cin > n; - input integer from console / въвеждаме числото от конзолата.
    
    cout << Square(static_cast <double> (n)) << endl; - output on console. we call da function and in fuction parameter we put our "n" inv variable. The function return double , so we make static cast to convert to required value;
    
    
    Декларираме функция(глобална), която приема един параметър от тип дабъл(число с плаваща запетая) и връща същия.
    В мейн метода декларираме и четем число от конзолата, след което в принта подаваме прочетеното число на функцията.
    Понеже тя изисква параметър дабъл, а ние сме прочели от конзолата целочислен тип, правим кастване към реално число и принтираме.
}


5) Memory management: Discuss the importance of memory management in C++ and explain the difference between stack and heap memory allocation.

Memory management is important in this language, becouse it is fast and thats why it is so popular in game development.
Управлението на паметта в този е език е важно, защото самия език работи най-близос паметта спрямо останалите езици, и затова е толкова популярен в разработката на игри.

Stack - is a local memory of the machine. / Стека е физическата памет на машината.
Heap - its a dynamic(virtual memory). / Хиипа е динамизната(виртуална памет).

6) ООП: Object-Oriented Programming: Explain the concept of Encapsulation in C++ and how it is achieved using classes.

Енкапсулациятя в обектно ориентираното програмиране се използва за скриване на определени неща на класа от външния свят(private/protected).
Encapsulation is one of oop principles, that hide information of a class from outside world(private/protected). Everythig "public" is visible.

7) Try Catch: Error Handling

I think in first scope "try" we do something with the code and declare exception(may be).
In second part "Catch" (exeption handling) we throw the expeption if found.

В първата част на скоупа, мисля че трябва да изпълниме някакък код и не съм сигурен дали се декларираше грешката, за която отговаря втората част - "Catch"


8) STL COntainers: Write about the pirpose and ise of the Vector container in C++.

This linear structure of data is more comfortabale to use for most people, than array.
It resize automaticaly, have own methods and also have a self destructor. Can contain only one type of data inside (for example -> "vector<int> intVect" / vector<string> / vector<Object> ).

 По предпочитан е от масива в 99% от случаите. Ако се гони невероятен перформънс , може с масива да е по-бързо изпълнението в някои случаи. Линейна структора от данни, която съдържа само тип от един вид(само цели числа, само символни низове). Има вграден деструктор и множество методи, които може да използваме. За разлика от масива не се налага сами да чистим паметта(динамичен масив).

9) Pointers and References: Discuss the difference between pointers and references in C++ and provide scenarios where one might be prefered over other.

    Pointer - it point to address in our memory. "&" -> before address variable. "*" -> dereferece to access the value of that variable.
    Указател -> сочи към адрес в паметта, който сме му задали. За да извлече стойността от дадения адрес трябва да "дереферира (*)"
    

    On other hard -> Reference - it also hold an address in memory. May be its useful , when we want to access a type or structure , that already is created. for example if we have a struct with vector inside, in main , if in any method we want to use that struct vector, we use "&" to access it, except to make copy of this vector.

    Като поинтера, пак сочи към адрес. За пример се сетих за структора с динамичен вектор, на когото не му правим копи в последвал метод, а го достъпваме по референция(по адрес).
