#include "Varparm.h"
#include "Call.h"

using namespace std;
using namespace Varparm;
using namespace Call;

int defaultparm(int x1, int x2, int x3, int x4, int x5, int x6=0, int x7= 0) {
    if (x6 == 0 && x7 == 0) return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 5;
    else return (x1 + x2 + x3 + x4 + x5 + x6 + x7) / 7;
}

int main() {
    setlocale(LC_ALL, "RU");

    int iv1 = ivarparm(0);
    int iv2 = ivarparm(1, 7);
    int iv3 = ivarparm(2, 4, 5);
    int iv4 = ivarparm(6, 9, 1, 4, 11, 2, 8);
    cout << "Демонстрация работы функции ivarparm: " << endl;
    cout << "iv1 = " << iv1 << endl;
    cout << "iv2 = " << iv2 << endl;
    cout << "iv3 = " << iv3 << endl;
    cout << "iv4 = " << iv4 << endl << endl;

    int sv1 = svarparm(0);
    int sv2 = svarparm(1, 5);
    int sv3 = svarparm(2, 2, 5);
    int sv4 = svarparm(6, 5, 3, 4, 1, 2, 7);
    cout << "Демонстрация работы функции svarparm: " << endl;
    cout << "sv1 = " << sv1 << endl;
    cout << "sv2 = " << sv2 << endl;
    cout << "sv3 = " << sv3 << endl;
    cout << "sv4 = " << sv4 << endl << endl;

    double fv1 = fvarparm(FLT_MAX);
    double fv2 = fvarparm(1.45, FLT_MAX);
    double fv3 = fvarparm(2.84, 15.4, FLT_MAX);
    double fv4 = fvarparm(6.74, 42.35, 91.15, 4.6, 5.24, 2.0, FLT_MAX);
    cout << "Демонстрация работы функции fvarparm: " << endl;
    cout << "fv1 = " << fv1 << endl;
    cout << "fv2 = " << fv2 << endl;
    cout << "fv3 = " << fv3 << endl;
    cout << "fv4 = " << fv4 << endl << endl;

    double d1 = dvarparm(DBL_MAX);
    double d2 = dvarparm(1.45, DBL_MAX);
    double d3 = dvarparm(2.84, 15.4, DBL_MAX);
    double d4 = dvarparm(6.74, 42.35, 1.15, 4.6, 25.24, 2.0, DBL_MAX);
    cout << "Демонстрация работы функции dvarparm: " << endl;
    cout << "d1 = " << d1 << endl;
    cout << "d2 = " << d2 << endl;
    cout << "d3 = " << d3 << endl;
    cout << "d4 = " << d4 << endl << endl;

    int c1 = 2, c2 = 4, c3 = 5;
    int call1 = cdevl(c1, c2, c3);
    int call2 = cstd(2, 4, c3);
    int call3 = cfst(2, 4, 5);
    cout << "Демонстрация работы функций cdevl, cstd, cfst: " << endl;
    cout << "cdevl = " << call1 << endl;
    cout << "cstd = " << call2 << endl;
    cout << "cfst = " << call3 << endl << endl;

    int parm1 = defaultparm(1, 7, 3, 4, 5);
    int parm2 = defaultparm(1, 9, 8, 4, 5, 6, 7);
    cout << "Демонстрация работы функций: " << endl;
    cout << "parm1 = " << parm1 << endl;
    cout << "parm2 = " << parm2 << endl;

    system("pause");
    return 0;
}

