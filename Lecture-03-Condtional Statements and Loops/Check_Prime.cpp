//Check a number is prime or not
#include <iostream> 
using namespace std;
int main() {
    int num, i;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; // If num is divisible by any number other than 1 and itself, it's not prime
                break;
            }
        }
    }

    if (isPrime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}