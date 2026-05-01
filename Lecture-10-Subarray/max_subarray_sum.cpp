//brute force approach
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{

    int n =5;
    int arr[5] = {1,2,3,4,5};
    int maxsum = INT_MIN;  // Smallest possible integer initially

       // Select starting index of subarray
    for (int st = 0; st < n; st++){

        int currsum=0;// Reset sum for each new start index

           // Select ending index of subarray
        for(int end = st; end < n; end++){

            currsum += arr[end]; // Add current ending element

            maxsum = max(currsum, maxsum);// Update maximum sum
        }
    }
    cout << "max subarray sum = "<< maxsum<<endl;
    return 0;
}