#include <iostream>

int main() {
    char arithmetic = 0;
    float num1, num2;

    while (arithmetic != 'q'){
        std::cout << "Enter the expression: " << std::endl;
        std::cin >> arithmetic >> num1 >> num2;

        switch (arithmetic) {
            case '+':
                std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
                break;

            case '-':
                std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
                break;

            case '*':
                std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
                break;

            case '/':
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
                break;

            default:
                std::cout << "Error" << std::endl;
        }
    }

    return 0;
}