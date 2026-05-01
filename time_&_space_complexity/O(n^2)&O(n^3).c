/*

O(n²) — Quadratic Time
Means runtime grows proportional to n × n.

If input doubles, work becomes about 4x.
n = 10 → 100 ops
n = 100 → 10,000 ops
n = 1000 → 1,000,000 ops

Common Cause: Two Nested Loops
for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        cout << i << j;
    }
}

Outer loop runs n times
Inner loop runs n times each time
Total:
n * n
✅ O(n²)


Time
 ^
 |              *
 |           *
 |        *
 |     *
 |   *
 | *
 |________________> n



Real Examples of O(n²)
Bubble Sort
Selection Sort
Comparing every pair
Brute-force subarray checks (many versions)
*/










/*

O(n³) — Cubic Time
Runtime grows proportional to n × n × n.

If input doubles, work becomes 8x.
n = 10 → 1,000 ops
n = 100 → 1,000,000 ops
n = 1000 → 1,000,000,000 ops 

Common Cause: Three Nested Loops
for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        for(int k=0;k<n;k++) {
            cout << i << j << k;
        }
    }
}

Total:
n * n * n
✅ O(n³)



Real Examples of O(n³) :

Basic matrix multiplication
Checking all triplets
Floyd-Warshall algorithm
Naive 3-sum brute force


*/