#include <iostream>
#include <cmath>

using namespace std;

// funkcje dzia�a�
double divide(double a, double b) {
return a / b;// dzielenie dw�ch liczb
}
double power(double a, double b) {
return pow(a, b);// pot�gowanie liczby a do pot�gi b
}
double logarithm(double a) {
return log10(a);
}// logarytm dziesi�tny liczby a

double add(double a, double b) {
    return a + b;// dodawanie dw�ch liczb
}

double subtract(double a, double b) {
    return a - b;// odejmowanie dw�ch liczb
}

double multiply(double a, double b) {
    return a * b;// mno�enie dw�ch liczb
}
int main() {
int choice;
double num1, num2, result;
// menu kalkulatora
cout << "KALKULATOR\n";
cout << "1. Dzielenie\n";
cout << "2.Pot�gowanie\n";
cout << "3. Logarytmowanie\n";
cout << "4. Dodawanie" << endl;
cout <<"5. Odejmowanie" << endl;
    cout << "6. Mnozenie" << endl;
cout << "wybierz dzialanie" << endl;
cin >> choice;

switch(choice) {// switch dla poszczeg�lnych dzia�a�
    case 1:
        cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

                cout << "podaj druga liczbe : " <<endl;
        cin >> num2;
        result = divide(num1, num2);
        cout << "Wynik: " << num1 << " / " << num2 << " = " << result << endl;
        break;
    case 2:
        cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

                cout << "podaj druga liczbe : " <<endl;
        cin >> num2;
        result = power(num1, num2);
        cout << "Wynik: " << num1 << " ^ " << num2 << " = " << result << endl;
        break;
    case 3:
                cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

        result = logarithm(num1);
        cout << "Wynik: log10(" << num1 << ") = " << result << endl;
        break;
    default:
        cout << "Nieznane dzia�anie." << endl;

                case 4:
        cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

                cout << "podaj druga liczbe : " <<endl;
        cin >> num2;
            result = add(num1, num2);
            cout << "Wynik: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 5:
        cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

                cout << "podaj druga liczbe : " <<endl;
        cin >> num2;
            result = subtract(num1, num2);
            cout << "Wynik: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 6:
        cout << "podaj pierwsza liczbe : " <<endl;
        cin >> num1;

                cout << "podaj druga liczbe : " <<endl;
        cin >> num2;
            result = multiply(num1, num2);
            cout << "Wynik: " << num1 << " * " << num2 << " = " << result << endl;
}
cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;
return 0;
}
