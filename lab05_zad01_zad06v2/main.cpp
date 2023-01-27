#include <iostream>
#include <cmath>

int main() {
    double masa, wzrost;
    std::cout << "podaj swoja wage w kilogramach" << std::endl;
    std::cin >> masa;

        std::cout << "Podaj swoj wzrost w metrach" << std::endl;
    std::cin >> wzrost;

    double bmi = masa / std::pow(wzrost, 2);
    std::cout << "Twoje BMI wynosi: " << bmi << std::endl;

    int bmi_category = static_cast<int>(bmi);
    switch(bmi_category) {

        case bmi < 18.5:
            std::cout << "Masz niedowage." << std::endl;
            break;
        case bmi >= 18.5 && bmi < 25:
            std::cout << "Twoja waga jest prawid³owa." << std::endl;
            break;
        case bmi >= 25 && bmi < 30:
            std::cout << "Masz nadwage." << std::endl;
            break;
        default:
            std::cout << "Masz oty³oœæ." << std::endl;
    }
    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    return 0;
}
