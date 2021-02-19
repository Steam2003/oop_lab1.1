#pragma once
#include <iostream>

using namespace std;

class Bill
{
private:
	int callDuration;
	int pricePerMinute;
public:
	int cost() { return callDuration * pricePerMinute; };
	int GetFirst() const { return callDuration; };
	int GetSecond() const { return pricePerMinute; };
	bool Init(int first, int second);
	void SetFirst(int value);
	void SetSecond(int value);
	void Display() const { cout << "Тривалість дзвінку: " << callDuration << " || Ціна за хвилину: " << pricePerMinute << endl; };
	void Read();
};

