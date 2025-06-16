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
 // ����������� �� ���������
    newString(int length); //����������� ����������� ����� �����
    newString( char* buffer); //����������� ����������� ������ ��������
    newString(newString&& newStr)  noexcept ;
    ~newString();
    
    friend ostream& operator<<(ostream& out, const newString& instr);  //�������� ������
    
    newString& operator=(newString&& newStr) ; //�������� ������������ ����� �����������
    

    void Input();
    void print();
   
    static int getSumStrings();




};


