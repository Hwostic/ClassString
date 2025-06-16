#include "newString.h"
#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "RU");
    system("chcp 1251");

    int lenght = 0;
    newString myString;

    cout << "Введите строку длиной до 10 символов: ";
    myString.Input();
    cout << "Ваша строка: ";
    myString.print();


    cout << "Создайте произвольную длину строки: ";
    cin >> lenght;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    newString myString2(lenght);
 
    
    const int bufferSize = 5000;
    char* buffer= new char [bufferSize];
    cout << "Введите вашу строку произвольной длины: ";
    cin.getline(buffer, bufferSize);
    newString myString3(buffer);
    cout << "Ваша строка: ";
    myString3.print();

    cout << "Количество созданных строк: " << newString::getSumStrings() <<endl;
   
    cout << "Проверка оператора вывода: " << myString3;


    myString3 = move(myString);

    cout << myString3;
}

