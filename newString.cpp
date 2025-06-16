#include "newString.h"
#include <iostream>
#include <ostream>
using namespace std;

int newString::count;

newString::newString() : newString(10) {};  //конструкто по умолчанию, который создает строку не больше 10 символов;{};

newString::newString(int length)  //конструктор, который принимает длину строки  и создает строку с этой длиной
{

	len=length;
	str = new char[len + 1];
	*str = '\0';
    count++;
};


newString::newString( char* buffer) //конструктор, создающий строку и инициализирующий ее строкой, введенным пользователем

{
//    const int bufferSize = 5000;
//    char buffer[bufferSize];
//    cout << "Введите вашу строку произвольной длины: ";
//    cin.getline(buffer, bufferSize);
    len = strlen(buffer);
    str = new char[len + 1];
    strcpy_s(str, len + 1, buffer);
    count++;
}


newString::newString(newString&& newStr) noexcept:
    str(newStr.str), len(newStr.len)
{
    newStr.str = nullptr;
    newStr.len = 0;
}

ostream& operator<<(ostream& out, const newString& instr)
{
        out << instr.str << endl;
        return out;

}

newString& newString::operator=(newString&& newStr) { //убрали конст, так как newStr - временная изменяемая
    if (this != &newStr) 
    {
      
        delete[] str; //освобождаем текущую память память

        //заменяем объекты
        str = newStr.str; 
        len = newStr.len;

       //обнуляем указатели
      newStr.str = nullptr;
      newStr.len = 0;
      
    }
    return *this;
}


void newString::Input()
{
    int size = 10000;
 

    while (true)
    {
        cin.getline(str, size);
        if (len == 10)
        {
            if (strlen(str) > 10)
            {
                cout << "Ошибка: строка не должна превышать 10 символов. Пожалуйста, попробуйте еще раз:" << endl;
                continue; // повторяем ввод
            }
            else
            {
                strcpy_s(this->str, len + 1, str);
                break;
            }
        }
        else // для строк другой длины (без проверки)
        {
            int inputLength = strlen(str);
            if (inputLength > len)
            {
                // Чтобы не переполнить выделенный массив, обрезаем ввод, если он больше len
                strncpy_s(this->str, len + 1, str, len);
                str[len] = '\0';
            }
            else
            {
                strcpy_s(this->str, len + 1, str);
            }
            break;
        }
    }
};

void newString:: print()
{
	int lenghtSrting;
	cout << str << endl;
    lenghtSrting = strlen(str);
	cout << "Проверка - длина введенной строки: " << lenghtSrting <<endl;

};

int newString::getSumStrings()
{
    return count;
};


newString::~newString()
{
	delete[] str;
};
