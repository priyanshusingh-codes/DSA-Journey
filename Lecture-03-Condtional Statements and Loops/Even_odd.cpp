//Check wheter a number is even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any Number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}