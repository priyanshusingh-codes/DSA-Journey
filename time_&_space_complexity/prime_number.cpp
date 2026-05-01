//Time complexity of prime number algorithm
#include<iostream>
using namespace std;
int main()
{
    int n;
    for (int i =2; i *i<=n; i++){
        if(n%i==0){
            cout << "Non Prime";
            break;
        }
    }
    return 0;
}

/*

i = 2 to i^2 <=n
=> i^2 = n
i = n^1/2

=> i = 2 to n^1/2 = O(m^1/2) 

*/