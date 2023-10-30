#include <iostream>
#include <string>

int main() {
    int NUM, RESUL, T, I;
    std::string linea;

    std::cout << "CUANTAS TABLAS: ";
    std::cin >> linea;
    NUM = std::stoi(linea);
    T = 1;

    while (T <= NUM) {
        I = 10;

        while (I >= 1) {
            RESUL = T * I;
            std::cout << T << " * " << I << " = " << RESUL << std::endl;
            I = I - 1;
        }

        std::cout << "Pulse Enter para continuar...";
        std::cin.ignore();
        std::cin.get();
        T = T + 1;
    }

    return 0;
}
