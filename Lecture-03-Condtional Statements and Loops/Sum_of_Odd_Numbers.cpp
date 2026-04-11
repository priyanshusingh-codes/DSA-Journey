//Sum of N Odd Numbers
#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the number of odd numbers to sum: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += (2 * i - 1); // sum = sum + (2*i - 1)
    }
    cout << "The sum of the first " << n << " odd numbers is: " << sum << endl;
    return 0;
}   