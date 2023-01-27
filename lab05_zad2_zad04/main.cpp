#include <iostream>
#include <fstream>

using namespace std;

int main() {
string line;
ifstream mojplik("osobfy.txt");

if (mojplik.is_open()) {
    while (getline(mojplik, line)) {
        cout << line << '\n';
    }
    mojplik.close();
} else {
    cout << "nie udalo sie otworzyc pliku, sprawdz nazwe"<<endl;
}
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430"  << endl;

return 0;

}
