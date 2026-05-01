#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < n-1; i++){
        int minIdx = i;
        for ( int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIdx]){
                minIdx =j;
            }
        }
    }
    return 0;
}


/*

i = 0 ===> j = 1 to n ====> n times
i = 1 ===> j = 2 to n ====> n-1 times
i = 2 ===> j = 3 to n ====> n-3 times

=> n +(n-1)+(n-2)+(n-3)...
=> n*(n-1)/2 *k = O(n^2) 
*/