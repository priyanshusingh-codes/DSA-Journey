#include<iostream>
#include<vector>//means you are importing the C++ Standard Library vector container.
using namespace std;
int main()
{
    vector<int>vec = {1, 2, 3, 4, 5};
    vec.pop_back();//it removes the last element.
    for ( int i : vec){// for each loop
        cout << i << endl;
    }
    return 0;
}