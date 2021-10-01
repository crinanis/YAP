//BudanovaKsenia2003
//БудановаКсения2003
//Буданова2003Ksenia

//В кодировке Windows - 1251
//42 75 64 61 6E 6F 76 61  4B 73 65 6E 69 61  32 30 30 33
//C1 F3 E4 E0 ED EE E2 E0  CA F1 E5 ED E8 FF  32 30 30 33
//C1 F3 E4 E0 ED EE E2 E0  32 30 30 33  4B 73 65 6E 69 61

//В кодировке UTF - 8
//42 75 64 61 6E 6F 76 61  4B 73 65 6E 69 61  32 30 30 33
//d091 d183 d0b4 d0b0 d0bd d0be d0b2 d0b0  d09a d181 dob5 dobd dob8 d18f  32 30 30 33
//42 75 64 61 6E 6F 76 61  32 30 30 33  d09a d181 dob5 dobd dob8 d18f

//В кодировке UTF - 16
//0042 0075 0064 0061 006E 006F 0076 0061  004B 0073 0065 006E 0069 0061  0032 0030 0030 0033 
//0411 0443 0434 0430 043D 043E 0430  041A 0441 0435 043D 0438 044F  0032 0030 0030 0033
//0411 0443 0434 0430 043D 043E 0430 0032 0030 0030 0033 004B 0073 0065 006E 0069 0061

#include <iostream>
using namespace std;
char* UpperW1251(char* destination, char* source);

int main()
{
	char lf[] = "BudanovaKsenia2003";
	char rf[] = "БудановаКсения2003";
	char lr[] = "Budanowa2003Ксения";

	wchar_t Llp[] = L"BudanovaKsenia2003";
	wchar_t Lrp[] = L"БудановаКсения2003";
	wchar_t Llr[] = L"Budanova2003Ксения";

	setlocale(LC_CTYPE, "Russian");
	char source[] = "Iseetherealyou36414518643874147evenIfYouDon'tIdo";
	char destination[] = "1234567876554321548651321546";
	UpperW1251(destination, source);
	cout << destination << endl;

	system("pause");
	return 0;
}

char* UpperW1251(char* destination, char* source) {
	for (int i = 0; i <= strlen(source); i++)
	{
		if (source[i] >= 'a' && source[i] <= 'z')
		{
			destination[i] = source[i] - 32;
		}
		else if (source[i] >= 'а' && source[i] <= 'я')
		{
			destination[i] = source[i] - 32;
		}
		else if (source[i] == 'ё')
		{
			destination[i] = 'Ё';
		}
		else
			destination[i] = source[i];
	}
	return destination;
}