#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <Windows.h>

using namespace std;

class Date
{
private:
	int day = 0, month = 0, year = 0;
	class Goods
	{
	private:
		string name;
		int price = 0;
		int count = 0;
		int number = 0;
	public:
		string GetName() const { return name; }
		int GetPrice() const { return price; }
		int GetCount() const { return count; }
		int GetNumder() const { return number; }

		void SetName(string name) { this->name = name; }
		void SetPrice(int price) { this->price = price; }
		void SetCount(int count) { this->count = count; }
		void SetNumber(int number) { this->number = number; }

		void Read(Goods* p, int N, int i);
		void Display(Goods* p, int N);
		bool Init(int Price, int Count, int Number);
		string ToString(int value);
		void ChangePrice(Goods* p, int num, int value);
		void ChangeCount(Goods* p, int num, int value);
	};
	Goods goods;
public:
	Date::Goods GetGoods() { return goods; }
	int GetDay() const { return day; }
	int GetMonth() const { return month; }
	int GetYear() const { return year; }

	void SetGoods(Goods goods) { this->goods = goods; }
	void SetDay(int day) { this->day = day; }
	void SetMonth(int month) { this->month = month; }
	void SetYear(int year) { this->year = year; }

	void Menu();
	bool Init(Goods goods, int day, int month, int year);
	void Read(Date* d, Goods* p, int N);
	void Display(Date* d, Goods* p, int N);
	void WorkWithDate(Date* d, int N);
	void AddDay(Date* d, int row, int value);
	void RemoveDay(Date* d, int row, int value);
	void PartOfDate(Date* d, int row);
	void ComparisonDate(Date* d, int row1, int row2);
	int Diff(Date* d, int row1, int row2);
	int ExpirationDate(Date* p, int row, int dday, int mmonth, int yyear);
};