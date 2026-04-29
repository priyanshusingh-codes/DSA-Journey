#include<iostream>
#include<vector>means you are importing the C++ Standard Library vector container.
using namespace std;
int main()
{
    vector<int>vec(5,0);
    for ( int i : vec){// for each loop
        cout << i << endl;
    }
    return 0;
}