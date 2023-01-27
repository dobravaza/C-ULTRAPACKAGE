#include <iostream>

int main() {
    int x;

    std::cout << "podaj liczbe: " << std::endl;
    std::cin >> x ;
    while (x <= 10000) {
        std::cout << x << "^2 = " << x * x << std::endl;
        x = x * x;
    }
    return 0;
            std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
}
