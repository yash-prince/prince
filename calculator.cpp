#include <iostream>

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
    if (b != 0) {
        return a / b;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;
    }
}

double calculateSine(double angle) {
    // Taylor series expansion for sine function
    double result = angle;
    double term = angle;
    double sign = -1.0;

    for (int n = 1; n <= 10; ++n) {
        term = term * angle * angle * sign / ((2 * n) * (2 * n + 1));
        result += term;
        sign *= -1;
    }

    return result;
}

double calculateCosine(double angle) {
    // Taylor series expansion for cosine function
    double result = 1.0;
    double term = 1.0;
    double sign = -1.0;

    for (int n = 1; n <= 10; ++n) {
        term = term * angle * angle * sign / ((2 * n) * (2 * n - 1));
        result += term;
        sign *= -1;
    }

    return result;
}

double calculateTangent(double angle) {
    return calculateSine(angle) / calculateCosine(angle);
}

int main() {
    int choice;
    double angle, result;

    std::cout << "Calculator Menu:" << std::endl;
    std::cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Sine\n6. Cosine\n7. Tangent" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice >= 1 && choice <= 4) {
        double num1, num2;
        std::cout << "Enter two numbers: ";
        std::cin >> num1 >> num2;

        switch (choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
        }
    } else if (choice >= 5 && choice <= 7) {
        std::cout << "Enter angle in radians: ";
        std::cin >> angle;

        switch (choice) {
            case 5:
                result = calculateSine(angle);
                break;
            case 6:
                result = calculateCosine(angle);
                break;
            case 7:
                result = calculateTangent(angle);
                break;
        }
    } else {
        std::cout << "Invalid choice!" << std::endl;
        return 1;
    }

    std::cout << "Result: " << result << std::endl;

    return 0;
}

