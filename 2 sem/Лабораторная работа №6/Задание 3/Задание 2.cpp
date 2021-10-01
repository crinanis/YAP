#include <iostream>
using namespace std;
#define sz 30

//typedef char name[sz];
typedef string name;
typedef int area;
typedef int population;

struct country {
	name nn;
	area aa;
	population pp;
};

bool operator == (country& left, country& right) {
	return ((left.aa == right.aa) && (left.pp == right.pp) && (left.nn == right.nn));
}

bool operator < (country& left, country& right) {
	return (left.aa < right.aa) && (left.pp < right.pp);
} 

bool operator > (country& left, country& right) {
	return (left.aa > right.aa) && (left.pp > right.pp);
}

int main() {

	country cou1 = { "Belarus", 207600, 9485000 };
	country cou2 = { "Poland", 312679, 37970000 };
	country cou3 = { "Japan", 377915, 126500000 };
	country cou4 = { "Belarus", 207600, 9485000 };

	(cou1 < cou2) ? cout << "true" << endl : cout << "false" << endl;
	(cou1 == cou3) ? cout << "true" << endl : cout << "false" << endl;
	(cou1 == cou4) ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}
