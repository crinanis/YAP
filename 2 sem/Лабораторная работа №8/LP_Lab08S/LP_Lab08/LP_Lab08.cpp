#include <iostream>
#pragma comment(lib, "e:\\!ПОИТ\\Second\\!ЯП\\Лабы\\Лабораторная работа №8\\LP_Lab08S\\Debug\\LP_Lab08L.lib")
#include "../LP_Lab08L/Dictionary.h"

using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Ru");
	try {
		Instance d1 = Create((char*)"Преподаватели", 5);
		Entry	e1 = { 1,"Белодед" }, e2 = { 2,"Ловенецкая" }, e3 = { 3,"Наркевич" }, e4 = { 4, "Буцень" }, e5 = { 5, "Пацей" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Print(d1);

		Instance d2 = Create((char*)"Студенты", 5);
		Entry s1 = { 1,"Петров" }, s2 = { 2,"Иванов" }, s3 = { 4,"Семёнов" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Print(d2);
	}
	catch (char* e) {
		cout << e << endl;
	}
	return 0;
}