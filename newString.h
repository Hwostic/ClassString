#pragma once
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
    newString( char* str); //����������� ����������� 
    ~newString();
    
    void Input();
    void print();
   
    static int getSumStrings();




};


