#include <iostream>
#include <string>

int main() {
    std::string name, surname, password;
    bool accessGranted = false;
    while (!accessGranted) {

        std::cout << "podaj imie:" << std::endl;
        std::cin >> name;
                std::cout << "podaj nazwisko:" << std::endl;
        std::cin >> surname;
                std::cout << "podaj haslo:" << std::endl;
        std::cin >> password;

        if (name == "Jan" && surname == "Kowalski" && password == "kowal37") {
            accessGranted = true;
            std::cout << "Dostep przyznany" << std::endl;
        } else {
            std::cout << "Bledne dane, sprobuj ponownie"<< std::endl;
        }
    }
        std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    return 0;
}
