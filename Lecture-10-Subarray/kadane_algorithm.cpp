//kadane algorithm
//dynamic programing algorithm
//leetcode question number 53
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int n =5;
    int arr[5] = {1,2,3,4,5};
    int maxsum = INT_MIN;  // Smallest possible integer initially
    int currsum = 0;
    for (int i = 0; i < n; i++){
        currsum += arr[i];
        maxsum = max(currsum,maxsum);
if (currsum < 0)
currsum = 0;
    }
    cout << "max subarray sum = "<< maxsum<<endl;
    return 0;
}
