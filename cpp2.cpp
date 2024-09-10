#include <iostream>
using namespace std;

void printFirstAndLastDigit(int number) {
    // Extract the last digit
    int lastDigit = number % 10;
    
    // Find the first digit
    while (number >= 10) {
        number /= 10;
    }
    int firstDigit = number;

    cout << "The first digit is: " << firstDigit << endl;
    cout << "The last digit is: " << lastDigit << endl;
}

int main() {
    int number;
    cout << "Enter an integer number: ";
    cin >> number;

    printFirstAndLastDigit(number);

    return 0;
}
