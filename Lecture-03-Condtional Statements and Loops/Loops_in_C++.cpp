//Loops in C++
#include <iostream>
using namespace std;
int main()
{
    //For loop
    for (int i = 0; i < 5; i++)
    {
        cout << "For loop iteration: " << i << endl;
    }

    //While loop
    int j = 0;
    while (j < 5)
    {
        cout << "While loop iteration: " << j << endl;
        j++;
    }

    //Do-while loop
    int k = 0;
    do
    {
        cout << "Do-while loop iteration: " << k << endl;
        k++;
    } while (k < 5);

    //Nested loops
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
        {
            cout << "Nested loop iteration: m = " << m << ", n = " << n << endl;
        }

        //Breaking out of a loop
        if (m == 1)
        {
            break; // This will exit the outer loop when m is 1
        }       
    }   

    return 0;
}   