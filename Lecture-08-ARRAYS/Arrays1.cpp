#include <iostream>
using namespace std;
int main ()
{
    int Marks [5] = {99, 100, 54, 36, 88};
    cout << Marks [0]<<endl;
    cout << Marks [1]<<endl; 
    cout << Marks [2]<<endl;
    cout << Marks [3]<<endl;
    cout << Marks [4]<<endl;
     cout << Marks [0]<<endl; // Will show error due memory overspacing 
     return 0;
}