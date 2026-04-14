//To calculate the binomial coefficient C(n, r) = n! / (r! * (n - r)!)
#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n)
{
    int fact =1;
    for (int i = 1; i <= n; i++)// Loop to calculate factorial
    {
        fact *= i;
    }
    return fact;
}
    int nCr (int n, int r)// Function to calculate C(n, r)
{
    
    if (r > n) 
        {
            return 0; // C(n, r) is 0 if r > n
        }
        if (r == 0 || r == n) // C(n, 0) and C(n, n) are both 1
        {
            return 1; // C(n, 0) and C(n, n) are both 1
        }
        return factorial(n) / (factorial(r) * factorial(n - r));
    }
int main()
{
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    int result = nCr(n, r);
    cout << "C(" << n << ", " << r << ") = " << result << endl;

    return 0;
}       
