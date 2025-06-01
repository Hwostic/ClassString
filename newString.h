#pragma once
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
    newString( char* str); //конструктор принимающий 
    ~newString();
    
    void Input();
    void print();
   
    static int getSumStrings();




};


