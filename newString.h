#pragma once
class newString
{
private:
    char* str;
    int len;

public:

    static int count;
    newString(); // ����������� �� ���������
    newString(int length); //����������� ����������� ����� �����
    newString(bool prompt); //����������� ����������� 
    ~newString();
    
    void Input();
    void print();
   
    static int getSumStrings();




};


