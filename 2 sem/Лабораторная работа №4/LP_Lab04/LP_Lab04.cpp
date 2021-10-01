#include <iostream>1
using namespace std;

int func() {
	int a = 121;
	int b = 31;
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int x, y, z, s;
	int n = 2;
	
	x = 9 + n;
	y = 10 + n;
	z = 11 + n;
	s = n + 1.0;

	bool f = false; //0x008ffdff (00)
	bool t = true; //0x008ffdf3 (01)


	char lat = 'k'; //0x008ffde7
	wchar_t kir = L'р'; //0x008ffdd8
	short x1 = x; //0B   0x000b(16) = 11(10)
	short x2 = -x; //1B   0xfff5(16) = -11(10)
	short smax = SHRT_MAX; //0x7fff(16) = 32767(10)
	short smin = 0; //0x0000(16) = 0(10)
	unsigned short max = USHRT_MAX; //0xffff(16) = 65535(10)
	unsigned short min = 0; //0x0000(16) = 0(10)


	int y1 = y; //0C(16) = 12(10)   0x00dff9fc
	int y2 = -y; //1C(16) = -12(10)   0x00dff9f0
	int iMax = INT_MAX; //0x7fffffff(16) = 2147483647(10)	
	int iMin = INT_MIN; //0x80000000(16) = -2147483648(10)
	unsigned int uiMax = UINT_MAX; //0xffffffff = 4294967295(10)
	unsigned int uiMin = 0; //0x00000000(16) = 0(10)

	long z1 = z; //0D(16) = 13(10)	0x00dff9b4
    long z2 = -z; //1D(16) = -13(10)  0x00dff9a8
	long lMax = LONG_MAX; //0x7fffffff(16) = 2147483647(10)
	long lMin = LONG_MIN; //0x80000000(16) = -2147483648(10)
	unsigned long ulMax = ULONG_MAX; //0xffffffff(16) = 4294967295(10)
	unsigned long ulMin = 0; //0x00000000(16) = 0(10)

	float s1 = s; //0 10000000 10000000(2) = 3(10)  0x00dff96c
	float s2 = -s; //1 10000000 10000000(2) = -3(10)  0x00dff960

	int(*pfunc)();
	pfunc = func;

	double nul = 0;
	cout << 1 / nul << endl;
	cout << -1 / nul << endl;
	cout << nul / nul << endl;


	//Указатели на char
	char* llat = &lat; //0x009cfce7
	wchar_t* kkir = &kir; //0x009cfcd8


	//Указатели на short
	short* xx1 = &x1; //0x009cfccc
	short j = sizeof(xx1);
	short v = sizeof(x1);
	int k = sizeof(pfunc);
	int b = sizeof(&x2);
	short* xx2 = &x2; //0x009cfcc0
	unsigned short* mmax = &max; //0x00b9fc3c
	unsigned short* mmin = &min; //0x009cfca8


	//Указатели на int
	int* yy1 = &y1; //0x009cfc9c
	int* yy2 = &y2; //0x009cfc90
	int* iiMax = &iMax; //0x009cfc84
	int* iiMin = &iMin; //0x009cfc78
	unsigned int* uuiMax = &uiMax; //0x009cfc6c
	unsigned int* uuiMin = &uiMin; //0x009cfc60


	//Указатели на long
	long* zz1 = &z1; //0x009cfc54
	long* zz2 = &z2; //0x009cfc48
	long* llMax = &lMax; //0x009cfc3c
	long* llMin = &lMin; //0x009cfc30
	unsigned long* uulMax = &ulMax; //0x009cfc24
	unsigned long* uulMin = &ulMin; //0x009cfc18


	//Указатели на float
	float* ss1 = &s1; //0x009cfc0c
	float* ss2 = &s2; //0x009cfc00

	void* linker;
	linker = &y1;
	linker = &f;

	short u = SHRT_MAX;//+		&u	0x0133f640 {32767}	short *

	short i = -1053;//+		&i	0x0133f634 {-1053}	short *

	short iii = -1;//+		&iii	0x0133f628 {-1}	short *

	short ppp = -254;//+		&ppp	0x0133f61c {-254}	short *

	short yyy = -23456;//+		&yyy	0x0133f610 {-23456}	short *

	short ooo = 3452;//+		&ooo	0x0133f604 {3452}	short *



	int zz = sizeof(int);
	int bb = sizeof(long);


return 0;
}