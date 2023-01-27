#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int x, y;
    cout << "wprowadz pierwsza liczbe" <<endl;
    cin >> x;
    cout << "wprowadz druga liczbe" <<endl;
    cin >> y;


    int sum = x + y;

    ofstream plik;
    plik.open("liczby.txt", ios::app); // otwarcie pliku w trybie dopisywania
    plik << x << " + " << y << " = " << sum << endl;
    plik.close();

    cout << "Suma liczb zostala zapisana w pliku liczby.txt" << endl;
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;
    return 0;
}


//W kodzie powy¿ej, u¿ywam bibSlioteki fstream do obs³ugi plików
