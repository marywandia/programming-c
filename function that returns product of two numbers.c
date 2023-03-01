#include <iostream>
using namespace std;
float product(float num1, float num2) {
    /*
    Returns the product of two numbers.

   Args:
        num1 (float): The first number.
        num2 (float): The second number.

   Returns:
        float: The product of num1 and num2.
    */
    return num1 * num2;
}

int main() {
    // Example usage
    float result = product(5.2, 7.8);
    cout << result << endl;  // Output: 40.56
    return 0;
}