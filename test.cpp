#include "calculator.h"
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    cout << "Addition: " << add(3, 4) << endl;
    cout << "Subtraction: " << subtract(10, 4) << endl;
    cout << "Multiplication: " << multiply(2, 5) << endl;
    cout << "Division: " << divide(10, 2) << endl;
    cout << "Factorial: " << factorial(5) << endl;
    cout << "GCD: " << gcd(24, 36) << endl;
    cout << "LCM: " << lcm(4, 6) << endl;
    cout << "Random Number (1-100): " << generate_random(1, 100) << endl;
    return 0;
}
