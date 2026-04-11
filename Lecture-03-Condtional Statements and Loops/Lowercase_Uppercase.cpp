//To Check a letter is Uppercase or Lowercase
#include <iostream>
using namespace std;    
int main() {

    //Using character comparison to check uppercase or lowercase
    /*
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (letter >= 'A' && letter <= 'Z') {
        cout << "The letter is uppercase." << endl;
    } else if (letter >= 'a' && letter <= 'z') {
        cout << "The letter is lowercase." << endl;
    } else {
        cout << "The input is not a valid letter." << endl;
    }
    */




    //Using ASCII values to check uppercase or lowercase
    char letter;
    cout << "Enter a letter: "; 
    cin >> letter;
    if (letter >= 65 && letter<=90){
        cout << "The letter is uppercase." << endl;
    }
    else if (ch>=97 && ch<=122){
        cout << "The letter is lowercase." << endl;
    }
    else {
        cout << "The input is not a valid letter." << endl;
    }   

    return 0;
}