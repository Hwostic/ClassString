#pragma once
using namespace std;
#include <iostream>

class newString
{
private:
    char* str;
    int len;

public:

    static int count;
    newString() ;
 // конструктор по умолчанию
    newString(int length); //конструктор принимающий новую длину
    newString( char* buffer); //конструктор принимающий массив символов
    newString(newString&& newStr)  noexcept ;
    ~newString();
    
    friend ostream& operator<<(ostream& out, const newString& instr);  //оператор вывода
    
    newString& operator=(newString&& newStr) ; //оператор присваивания через перемещение
    

    void Input();
    void print();
   
    static int getSumStrings();




};


