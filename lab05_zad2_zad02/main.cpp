#include <iostream>

using namespace std;
//definicje funkcji por�wna� - isGreater por�wnuje czy x jest wi�ksze od y, isNotEqual por�wnuje czy x jest r�ne od y, isEqual por�wnuje czy x jest r�wne y, isLess por�wnuje czy x jest mniejsze od y
// funkcje por�wna�
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
    cout << "Menu por�wna�:" << endl;
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


// switch case, kt�ry wywo�uje odpowiedni� funkcj� por�wnania na podstawie wyboru u�ytkownika i wy�wietla wynik
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
            cout << "Nieznane por�wnanie." << endl;
    }
    return 0;
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;
}
