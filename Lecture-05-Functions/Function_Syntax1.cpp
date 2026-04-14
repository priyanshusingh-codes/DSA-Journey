#include <iostream>
using namespace std;
//Function Determination
int printHEllo() 
{
    cout << "Hello \n"; // To print Hello
    return 3; // Then return the value 3 to the caller
}
int main()
{
    //Fuinction Invoke/ Calling a Function
    int val = printHEllo(); //Stores the return value of the function in val
    cout << "val = "<< val << endl; // Prints the stored value
    return 0;
}