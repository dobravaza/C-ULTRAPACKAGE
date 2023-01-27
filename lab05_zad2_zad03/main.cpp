#include <iostream>
#include <fstream>

using namespace std;

int main() {
ofstream file("osoby.txt"); // utworzenie pliku osoby.txt
string imie, nazwisko;
while (true) {
cout << "Wpisz imie i nazwisko do zapisu, wcisnij q by zakonczyc program" << endl;

 cin >> imie;
 if (imie == "q") {
 break;
 }
 cin >> nazwisko;
file << imie << " " << nazwisko << endl; // zapisanie imienia i nazwiska do pliku
}
file.close(); // zamkniêcie pliku
cout << "Zapisano imiona i nazwiska do pliku osoby.txt" << endl;
cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;
return 0;

}
