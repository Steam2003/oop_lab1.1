#include "Bill.h"

bool Bill::Init(int first, int second)
{
	if (first >= 0 && second >= 0)
	{
		callDuration = first;
		pricePerMinute = second;
		return true;
	}
	else
	{
		callDuration = 0;
		pricePerMinute = 0;
		return false;
	}
}
void Bill::Read()
{
	int a, b;
	do {
		cout << "Введіть кількість хвилин розмови: "; cin >> a;
		cout << "Введіть ціну за хвилину: "; cin >> b;
		if (a < 0 || b < 0)
			cout << "Помилка введення даних" << endl;
	} while (!(Init(a, b)));

}
void Bill::SetFirst(int value) 
{
	if (value >= 0)
		callDuration = value;
	else
		callDuration = 0;
}
void Bill::SetSecond(int value)
{
	if (value >= 0)
		pricePerMinute = value;
	else
		pricePerMinute = 0;
}
