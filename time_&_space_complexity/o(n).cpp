/*
O(n) means linear time complexity.
As input size n grows, runtime grows proportionally.

Time
 ^
 |          /
 |        /
 |      /
 |    /
 |  /
 |/
 |________________> n

 
*/



/*
example : N!

int fact =1;      => k times
for (int i = 1; i <= n; i++) { => loop runs n times
fact *= i; => k times
}

n*k = n = O(n)
*/


/*

Nth Fibbonachi

for int i =2; i<=n; i++) {
dp[i]=dp[i-1]+dp[i-2];
}

*/


/*

KADANE'S ALGOTRITHM

int currsum = 0, ans = INT_MIN; => k
for (int i =0; i < n; i++){ => n
currsum += arr[i] => k
ans = max(currsum, ans); => k
currsum = currsum < 0?0: currsum ; => k
}


O(n)
*/