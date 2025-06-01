#include "newString.h"
#include <iostream>
using namespace std;

int newString::count;

newString::newString() : newString(10) {};  //���������� �� ���������, ������� ������� ������ �� ������ 10 ��������;{};
newString::newString(int length)  //�����������, ������� ��������� ����� ������  � ������� ������ � ���� ������
{

	len=length;
	str = new char[len + 1];
	*str = '\0';
    count++;
};


newString::newString( char* buffer) //�����������, ��������� ������ � ���������������� �� �������, ��������� �������������

{
//    const int bufferSize = 5000;
//    char buffer[bufferSize];
//    cout << "������� ���� ������ ������������ �����: ";
//    cin.getline(buffer, bufferSize);
    len = strlen(buffer);
    str = new char[len + 1];
    strcpy_s(str, len + 1, buffer);
    count++;
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
                cout << "������: ������ �� ������ ��������� 10 ��������. ����������, ���������� ��� ���:" << endl;
                continue; // ��������� ����
            }
            else
            {
                strcpy_s(this->str, len + 1, str);
                break;
            }
        }
        else // ��� ����� ������ ����� (��� ��������)
        {
            int inputLength = strlen(str);
            if (inputLength > len)
            {
                // ����� �� ����������� ���������� ������, �������� ����, ���� �� ������ len
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
	cout << "�������� - ����� ��������� ������: " << lenghtSrting <<endl;

};

int newString::getSumStrings()
{
    return count;
};


newString::~newString()
{
	delete[] str;
};
