#include <iostream>
using namespace std;
int main()
{
	/*
	1) ����������� 
	short 2 �����. int 2,4  . long 4 .long long 8
	2) ���� float 4, double 8
	3) �������� char - 1
	4) ����� bool - 1 ����
	*/

	//int value = 10;
	//{
	//	const char value = 'B';
	//}
	//
	/*const int T = 36;
	const double PI;
	PI = 3.14;*/

	//int a = 10;
	//int b = 20;
	///*����� ��������� - �� ���������,
	// �� ���������� �������� ���� bool,
	// ����� true(1) ��� false(0)*/

	//cout << (a == b); //�������
	//cout << (a != b); // �� �������
	//cout << (a > b); // �����
	//cout << (a < b); // ������
	//cout << (a >= b); // ����� ��� �������
	//cout << (a <= b); // ������ ��� �������
	//bool isSuccess = true;
	//cout << !isSuccess; //false �������, ������ �
	
	//!true => false
	//!false => true
	
	//&& �, || ���
	/*cout << ((a < b) && (b != 5));
	short a2 = 20;
	int b2 = a2;
	a2 = 4.5;*/


	/*int a = 100;
	int b = -10;
	int c = 20;
	cout << !((a>b) || (c!=b));*/

	/*cout << "Enter value: ";
	int val;
	cin >> val;
	if (val > 0)
	{
		cout << "sign value +";
	}
	else if(val==0)
	{
		cout << "sign value equal 0";
	}
	else
	{
		cout << "sign value -";
	}*/
	cout << "Enter number (1-7):";
	int day;
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "Mon";
		break;
	case 2:
		cout << "Tus";
		break;
	case 3:
		cout << "Wen";
		break;
	case 4:
		cout << "Th";
		break;
	case 5:
		cout << "Fr";
		break;
	case 6:
		cout << "Sat";
		break;
	case 7:
		cout << "Sun";
		break;
	default:
		cout << "Error";
		break;
	}


	/*CTRL+K CTRL +C
	CTRL + K CTRL + U*/
}