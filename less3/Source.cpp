#include <iostream>
using namespace std;

int main()
{
	/*char symbol = '\q';
	cout << (int)symbol;*/
	/*
	for - цикл з параметрами
	while - цикл з передумовою
	do while - цикл з постумовою
	*/


	/*for (int i=0;i<10;i--)
	{
		cout << 1;
	}*/

	//інкремент ++ унарний оператор
	//декремент -- унарний оператор
	//x++; //x=x+1
	//int x = 10;
	//int result = x++ * 2; //20
	//int result = ++x * 2; //22
	//int result = ++x+x; //22
	//cout << result;
	//cout << ++x; //11
	//cout << x++; //10
	//cout << endl << x;


	//int y = 100;
	//cout << y+2+--y << endl; //200
	//cout << y; //99

	//cout << ++y << endl; //
	//cout << y; //

	//for (int i = 0; i !=10; i++)
	//{
	//	cout << i << endl;
	//}
	/*int i = 10;
	while (i >= 0)
	{
		cout << i;
		i--;
	}*/

	//int y = 10;
	//do {
	//	cout << y;
	//	y--;
	//} while (y != 10);
	int min = 1, max = 500;
	srand(time(0));
	cout << rand()%(max-min)+min;

	return 0;
}