#include "Bill.h"
#include <Windows.h>

Bill makeBill(unsigned int callDuration, unsigned int pricePerMinute)
{
	Bill bb;
	if (!bb.Init(callDuration, pricePerMinute))
	{
		cout << "Помилка введення даних" << endl;
		cout << "________________________________________" << endl;
	}
	return bb;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int x,y;
	Bill b;
	b.Init(5, 3);
	b.Display();
	cout << "Рахунок за розмову: " << b.cost() << endl;
	cout << "________________________________________" << endl;
	Bill b2;
	b2.Read();
	b2.Display();
	cout << "Рахунок за розмову: " << b2.cost() << endl;
	cout << "________________________________________" << endl;
	Bill b3;
	cout << "Введіть кількість хвилин розмови: "; cin >> x;
	cout << "Введіть ціну за хвилину: "; cin >> y;
	b3 = makeBill(x, y);
	b3.Display();
	b3.SetFirst(2);
	b3.SetSecond(3);
	cout << "Введіть кількість хвилин розмови: " << b3.GetFirst() << endl;
	cout << "Введіть ціну за хвилину: " << b3.GetSecond() << endl;
	b3.Display();
	cout << "Рахунок за розмову: " << b3.cost() << endl;
}