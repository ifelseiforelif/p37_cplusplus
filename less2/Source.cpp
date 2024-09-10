#include <iostream>
using namespace std;
int main()
{
	/*
	1) цілочисельні 
	short 2 байта. int 2,4  . long 4 .long long 8
	2) дійсні float 4, double 8
	3) символьні char - 1
	4) логічні bool - 1 байт
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
	///*логічні оператори - це оператори,
	// які повертають значення типу bool,
	// тобто true(1) або false(0)*/

	//cout << (a == b); //дорівнює
	//cout << (a != b); // НЕ дорівнює
	//cout << (a > b); // більше
	//cout << (a < b); // меньше
	//cout << (a >= b); // більше або дорівнює
	//cout << (a <= b); // меньше або дорівнює
	//bool isSuccess = true;
	//cout << !isSuccess; //false інверсія, логічне ні
	
	//!true => false
	//!false => true
	
	//&& і, || або
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