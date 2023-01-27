#include <iostream>

int main() {
    int x;
    int sum = 0;

    std::cout << "Napisz liczby by obliczyc sume kwadratow wszystkich liczb calkowitych dodatnich do podanej liczby" << std::endl;
    std::cin >> x ;
    for (int i = 1; i <= x; i++) {
        sum += i * i;
    }
    std::cout << "Suma kwadratow liczb od 1 do " << x << " wynosi " << sum << std::endl;
        std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    return 0;
}
