
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    std::vector<int> numbers;
    int num;
    do {

    std::cout << "Wprowadz liczby do obliczenia sredni, klawisz 0 rozoczyna obliczenia" << std::endl;
    std::cin >> num;
        if (num > 0) {
            numbers.push_back(num);
        }
    } while (num > 0);

    if (numbers.empty()) {
        std::cout << "Nie wprowadzono zadnych liczb." << std::endl;
    } else {
        double average = std::accumulate(numbers.begin(), numbers.end(), 0.0) / numbers.size();
        std::cout << "srednia arytmetyczna liczb to: " << average << std::endl;
    }
    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    return 0;
}
