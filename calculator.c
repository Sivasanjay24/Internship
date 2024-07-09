#include <iostream>
#include <cmath>
#include <limits>

// Function Prototypes
void showMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double squareRoot(double a);
double exponentiate(double base, double exponent);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

int main() {
    while (true) {
        showMenu();
        int choice;
        std::cin >> choice;
        
        if (std::cin.fail() || choice < 0 || choice > 9) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid choice. Please try again.\n";
            continue;
        }

        if (choice == 0) break;

        double num1, num2;
        switch (choice) {
            case 1:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << add(num1, num2) << "\n";
                break;
            case 2:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << subtract(num1, num2) << "\n";
                break;
            case 3:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << multiply(num1, num2) << "\n";
                break;
            case 4:
                std::cout << "Enter two numbers: ";
                std::cin >> num1 >> num2;
                if (num2 == 0) {
                    std::cout << "Error: Division by zero.\n";
                } else {
                    std::cout << "Result: " << divide(num1, num2) << "\n";
                }
                break;
            case 5:
                std::cout << "Enter a number: ";
                std::cin >> num1;
                std::cout << "Result: " << squareRoot(num1) << "\n";
                break;
            case 6:
                std::cout << "Enter base and exponent: ";
                std::cin >> num1 >> num2;
                std::cout << "Result: " << exponentiate(num1, num2) << "\n";
                break;
            case 7:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << sine(num1) << "\n";
                break;
            case 8:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << cosine(num1) << "\n";
                break;
            case 9:
                std::cout << "Enter an angle in radians: ";
                std::cin >> num1;
                std::cout << "Result: " << tangent(num1) << "\n";
                break;
        }
    }
    return 0;
}

void showMenu() {
    std::cout << "Select operation:\n";
    std::cout << "1. Addition\n";
    std::cout << "2. Subtraction\n";
    std::cout << "3. Multiplication\n";
    std::cout << "4. Division\n";
    std::cout << "5. Square Root\n";
    std::cout << "6. Exponentiation\n";
    std::cout << "7. Sine\n";
    std::cout << "8. Cosine\n";
    std::cout << "9. Tangent\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double squareRoot(double a) {
    if (a < 0) {
        std::cerr << "Error: Negative input for square root.\n";
        return -1;
    }
    return sqrt(a);
}

double exponentiate(double base, double exponent) {
    return pow(base, exponent);
}

double sine(double angle) {
    return sin(angle);
}

double cosine(double angle) {
    return cos(angle);
}

double tangent(double angle) {
    return tan(angle);
}
