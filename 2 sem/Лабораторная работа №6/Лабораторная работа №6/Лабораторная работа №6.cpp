#include <iostream>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct country {
	day dd;
	month mm;
	year yyyy;
};

bool operator == (country& left, country& right) {
	return ((left.yyyy == right.yyyy) && (left.mm == right.mm) && (left.dd == right.dd));
}

bool operator < (country& left, country& right) {
	return(left.yyyy < right.yyyy) || ((left.yyyy == right.yyyy) && (left.mm < right.mm)) || ((left.mm == right.mm) && (left.dd < right.dd));
}

bool operator > (country& left, country& right) {
	return(left.yyyy > right.yyyy) || ((left.yyyy == right.yyyy) && (left.mm > right.mm)) || ((left.mm == right.mm) && (left.dd > right.dd));
}

int main() {

	country date1 = { 7,1,1980 };
	country date2 = { 29,2,1993 };
	country date3 = { 7,1,1980 };

	(date1 < date2) ? cout << "true" << endl : cout << "false" << endl;
	(date1 > date2) ? cout << "true" << endl : cout << "false" << endl;
	(date1 == date2) ? cout << "true" << endl : cout << "false" << endl;
	(date1 == date3) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}
