#include <iostream>
using namespace std;
int main ()
{
    int marks[5];
    int size = 5;

    for ( int i =0; i < size; i++)
    {
        cin >> marks [i];
    }

    //To Know the size of Array
    //int sz = sizeof(Marks)

    for (int i =0; i < size; i++)
    { 
        cout << marks [i] << endl;
    }
    return 0;
}