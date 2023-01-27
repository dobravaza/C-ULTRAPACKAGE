#include <iostream>

using namespace std;
//definicje funkcji porównañ - isGreater porównuje czy x jest wiêksze od y, isNotEqual porównuje czy x jest ró¿ne od y, isEqual porównuje czy x jest równe y, isLess porównuje czy x jest mniejsze od y
// funkcje porównañ
bool isGreater(int x, int y) {
    return x > y;
}
bool isNotEqual(int x, int y) {
    return x != y;
}
bool isEqual(int x, int y) {
    return x == y;
}
bool isLess(int x, int y) {
    return x < y;
}

int main() {
    int choice;
    int x, y;
    bool result;
    cout << "Menu porównañ:" << endl;
    cout << "1. Czy x > y" << endl;
    cout << "2. Czy x != y" << endl;
    cout << "3. Czy x == y" << endl;
    cout << "4. Czy x < y" << endl;

    cout << "wpisz porownanie: ";
    cin >> choice;

    cout << "podaj x" <<endl;
    cin >> x;
    cout << "podaj y"<<endl;
    cin >> y;


// switch case, który wywo³uje odpowiedni¹ funkcjê porównania na podstawie wyboru u¿ytkownika i wyœwietla wynik
    switch(choice) {
        case 1:
            result = isGreater(x, y);
            cout << "Czy x > y: " << boolalpha << result << endl;
            break;
        case 2:
            result = isNotEqual(x, y);
            cout << "Czy x != y: " << boolalpha << result << endl;
            break;
        case 3:
            result = isEqual(x, y);
            cout << "Czy x == y: " << boolalpha << result << endl;
            break;
        case 4:
            result = isLess(x, y);
            cout << "Czy x < y: " << boolalpha << result << endl;
            break;
        default:
            cout << "Nieznane porównanie." << endl;
    }
    return 0;
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;
}
