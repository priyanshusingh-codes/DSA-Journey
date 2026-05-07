#include<iostream>
#include<vector>//means you are importing the C++ Standard Library vector container.
using namespace std;
int main()
{
    vector<char>vec = {'a','b','c','d','e'};
cout << "size = " << vec.size() << endl;

    for ( char i : vec){// for each loop
        cout << i << endl;
    }
    return 0;
}