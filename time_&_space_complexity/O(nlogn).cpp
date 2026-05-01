/*

Do log n work across n items, or do n work over log n levels.

Usually happens when:
You process all elements
While repeatedly dividing the problem



Famous Example: Merge Sort
Split array into halves
Sort each half
Merge sorted halves

Split depth:
✅ log n levels
Work per level:
✅ n total merging
So:
n + n + n + ... (log n times)
= n log n
✅ O(n log n)

Other Common O(n log n) Algorithms
Sorting
Merge Sort
Heap Sort
Quick Sort (average case)
Data Structures
Building / processing heaps
Some divide & conquer algorithms





Time
 ^
 |                 /
 |               /
 |             /
 |           /
 |         /
 |       /
 |     /
 |___/________________> n


*/