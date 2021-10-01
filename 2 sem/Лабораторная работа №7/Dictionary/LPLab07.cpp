#include "Dictionary.h"
#include "stdafx.h"
using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Ru");
	try {
        #if (defined(TEST_CREATE_1)+ defined(TEST_CREATE_2)+ defined(TEST_ADDENTRY_1)+ defined(TEST_ADDENTRY_2)+ defined(TEST_GETENTRY_1)+ defined(TEST_DELENTRY_1)+ defined(TEST_UPDENTRY_1)+ defined(TEST_UPDENTRY_2)+ defined(TEST_DICTIONARY) > 1)
        #error ONLY ONE TEST CAN BE USED
        #endif


#ifdef TEST_CREATE_1
		 Instance test = Create((char*)"ddfnskndshbhsbdkdshvbhsvbskhbvskjdvnsjkvb", 5);

#elif defined TEST_CREATE_2
		Instance test = Create((char*)"ThisIsTest", 50000);

#elif defined TEST_ADDENTRY_1
		Instance test = Create((char*)"TEST", 0);
		Entry test_e = { 1,"��������" };
		AddEntry(test, test_e);
#elif defined TEST_ADDENTRY_2
		Instance test = Create((char*)"TEST", 5);
		Entry test_e = { 1,"��������" };
		AddEntry(test, test_e);
		AddEntry(test, test_e);

#elif defined TEST_GETENTRY_1
		Instance test = Create((char*)"TEST", 5);
		Entry test_e = { 1,"��������" };
		AddEntry(test, test_e);
		GetEntry(test, 2);

#elif defined TEST_DELENTRY_1
		Instance test = Create((char*)"TEST", 5);
		Entry test_e = { 1,"��������" };
		AddEntry(test, test_e);
		DelEntry(test, 2);

#elif defined TEST_UPDENTRY_1
		Instance test7 = Create((char*)"TEST", 5);
		Entry test_e7 = { 1,"��������" }, test_upd_e7 = { 2,"check" };
		AddEntry(test7, test_e7);
		UpdEntry(test7, 3, test_upd_e7);

#elif defined TEST_UPDENTRY_2
		Instance test = Create((char*)"TEST", 5);
		Entry test_e = { 1,"��������" }, test_upd_e = { 1,"check" };
		AddEntry(test, test_e);
		UpdEntry(test, 1, test_upd_e);

#else
		Instance d1 = Create((char*)"�������������", 5);
		Entry	e1 = { 1,"�������" }, e2 = { 2,"����������" }, e3 = { 3,"��������" }, e4 = { 4, "������" }, e5 = { 5, "�����" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Entry getE = GetEntry(d1, 4);
		DelEntry(d1, 2);
		Entry newentry1 = { 6, "�������" };
		UpdEntry(d1, 3, newentry1);
		Print(d1);

		Instance d2 = Create((char*)"��������", 5);
		Entry s1 = { 1,"������" }, s2 = { 2,"������" }, s3 = { 4,"������" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Entry newentry3 = { 3, "������" };
		UpdEntry(d2, 4, newentry3);
		Print(d2);
		Delete(d1);
		Delete(d2);
#endif
	} catch (char* e) {
		cout << e << endl;
	}
	return 0;
}