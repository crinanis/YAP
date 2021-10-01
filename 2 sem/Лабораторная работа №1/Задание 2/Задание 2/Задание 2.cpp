#include <iostream>
#include <cctype>
using namespace std;

int visokosniy_li(int year);
int poradkoviy(int poradkoviy_nomer, int day, int month, int year);
int n = 0;
int counter = 0;

int main()
{
    setlocale(LC_ALL, "russian");
    char a[50];
    int data, day, month, year, vsego;
    int poradkoviy_nomer = 0, my_day = 0, pp = 0, dni = 0, k = 5;
    while (k > 0) {
        cout << "Введите дату в формате ДДММГГГГ" << endl;
        cin >> a;

        ::counter = 0;
        for (int i = 0; i < 8; i++) {
            if (isdigit(a[i])) {
                ::counter++;
            }

        }

        ::n = 0;

        if (::counter != 8) {
            ::n = 10;
        }
        else {
            ::n = 0;
        }

        switch (::n) {
        case 0: {
        int n1, n2, n3, n4, n5, n6, n7, n8;
        n1 = a[0] - '0';                      //20 12 2020
        n2 = a[1] - '0';
        n3 = a[2] - '0';
        n4 = a[3] - '0';
        n5 = a[4] - '0';
        n6 = a[5] - '0';
        n7 = a[6] - '0';
        n8 = a[7] - '0';

        day = n1 * 10 + n2;
        month = n3 * 10 + n4;
        year = n5 * 1000 + n6 * 100 + n7 * 10 + n8;

        // Создаём массив чисел, отноящихся к каждому месяцу
        int mesaci[] = { 31, (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? 29 : 28, 31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
        int check = 0;
        if (month > 12 || day > mesaci[month - 1] || year > 2021) {
           cout << "Введена неккоректная дата" << endl;
           break;
        }
            cout << "День: " << day << "\n" << "Месяц: " << month << "\n" << "Год: " << year << endl;
            for (int i = 0; i < month - 1; i++) {
                poradkoviy_nomer += mesaci[i];
            }
            poradkoviy_nomer += day;
            // Определили порядковый номер дня в году, теперь определяем, сколько дней осталось до ближайшего дня рождения
            for (int i = 0; i < 6; i++) {
                pp += mesaci[i];
            }
            my_day = pp + 10;

            if (poradkoviy_nomer < my_day) {
                cout << "До ближайшего дня рождения осталось " << my_day - poradkoviy_nomer << " дней.\n";
            }
            else {
                if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
                    vsego = 366;
                    cout << "До ближайшего дня рождения осталось " << (my_day + vsego - poradkoviy_nomer) << " дней.\n";
                }
                else {
                    vsego = 365;
                    cout << "До ближайшего дня рождения осталось " << (my_day + vsego - poradkoviy_nomer) << " дней.\n";
                }
            }
            visokosniy_li(year);
            poradkoviy(poradkoviy_nomer, day, month, year);
            return 0;
        }
        case 10: {
            ::n = 0;
            break;
        }
        }
    }

}

int visokosniy_li(int year) {
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        cout << "Год является високосным.\n";
    }
    else {
        cout << "Год не является високосным\n";
    }
    return 0;
}

int poradkoviy(int poradkoviy_nomer, int day, int month, int year) {
    poradkoviy_nomer = 0;
    int months[] = { 31, (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) ? 29 : 28, 31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 ,30 ,31 };
    for (int i = 0; i < month - 1; i++) {
        poradkoviy_nomer += months[i];
    }
    poradkoviy_nomer += day;

    cout << "Это " << poradkoviy_nomer << "-ый день в году.\n";
    return 0;
}