#include <iostream>
#include <cmath>

using namespace std;

// funkcje dzia³añ
double divide(double a, double b) {
return a / b;// dzielenie dwóch liczb
}
double power(double a, double b) {
return pow(a, b);// potêgowanie liczby a do potêgi b
}
double logarithm(double a) {
return log10(a);
}// logarytm dziesiêtny liczby a

double add(double a, double b) {
    return a + b;// dodawanie dwóch liczb
}

double subtract(double a, double b) {
    return a - b;// odejmowanie dwóch liczb
}

double multiply(double a, double b) {
    return a * b;// mno¿enie dwóch liczb
}
int main() {
int choice;
double num1, num2, result;
// menu kalkulatora
cout << "KALKULATOR\n";
cout << "1. Dzielenie\n";
cout << "2.Potêgowanie\n";
cout << "3. Logarytmowanie\n";
cout << "4. Dodawanie" << endl;
cout <<"5. Odejmowanie" << endl;
    cout << "6. Mnozenie" << endl;
cout << "wybierz dzialanie" << endl;
cin >> choice;

switch(choice) {// switch dla poszczególnych dzia³añ
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
        cout << "Nieznane dzia³anie." << endl;

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
