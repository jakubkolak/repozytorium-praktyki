#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Wyierz co chcesz zrobic: a+b(1) a-b(2) a*b(3) a/b(4) :" << endl;
    cin >> c;

        switch (c)
        {
        case 1:
            cout << "Wynik: " << a+b << endl;
            break;

        case 2:
            cout << "Wynik: " << a-b << endl;
            break;

        case 3:
            cout << "Wynik: " << a*b << endl;
            break;

        case 4:
            cout << "Wynik: " << a/b << endl;
            break;

        default:
            cout << "Nie mozna tego wykonac" << endl;
            break;
        }
    return 0;
}
