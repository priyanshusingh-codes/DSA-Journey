//To print subarray of an array
#include<iostream>// For input/output (cout)
#include<vector>   // So we can use cout without std::
using namespace std;
int main()
    {
int n = 5; // Size of array
int arr[5]={1,2,3,4,5}; // Array elements
// Loop for selecting starting index of subarray
for (int st =0; st < n; st++){
     // Loop for selecting ending index of subarray
        // Starts from st because end cannot be before start
    for ( int end = st; end < n; end++){
        // Loop for printing elements from start to end
        for (int i = st; i <= end; i++){
            cout << arr[i];// Print current element
        }
        cout <<" ";
    }
    cout << endl;// Move to next line after one subarray
}
return 0;
    }