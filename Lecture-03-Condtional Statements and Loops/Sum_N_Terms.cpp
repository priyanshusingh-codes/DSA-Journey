//SUm upto N Terms
#include <iostream> 
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }
    cout << "The sum of the first " << n << " terms is: " << sum << endl;
    return 0;
}