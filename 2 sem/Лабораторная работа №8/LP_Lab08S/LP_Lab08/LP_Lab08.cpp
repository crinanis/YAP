#include <iostream>
#pragma comment(lib, "e:\\!����\\Second\\!��\\����\\������������ ������ �8\\LP_Lab08S\\Debug\\LP_Lab08L.lib")
#include "../LP_Lab08L/Dictionary.h"

using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Ru");
	try {
		Instance d1 = Create((char*)"�������������", 5);
		Entry	e1 = { 1,"�������" }, e2 = { 2,"����������" }, e3 = { 3,"��������" }, e4 = { 4, "������" }, e5 = { 5, "�����" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Print(d1);

		Instance d2 = Create((char*)"��������", 5);
		Entry s1 = { 1,"������" }, s2 = { 2,"������" }, s3 = { 4,"������" };
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