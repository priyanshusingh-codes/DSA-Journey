/*

Static Memory Allocation :- When memory for variables/arrays is reserved in advance and cannot change during runtime.
//allocated at compile time
//stored in stack
Example : int arr[5];

Characteristics
1. Fixed Size => Memory amount is predetermined.

2. Fast Access => No allocation logic during runtime.

3. Simple to Use =>No need for malloc, new, free, delete.

4. May Waste Memory => If you use only 10 out of 100 slots.

5. Cannot Grow => If you need more space later, tough situation.

*/



/*

Dynamic Memory Allocation => Dynamic memory allocation means memory is allocated during program execution (runtime) as needed, and the size can often be controlled or changed dynamically.
//allocated at run time or execution time
//stored in heap
//This is memory on demand.
Example :
vector<int>vec;

Key Features
1. Allocated at Runtime => Memory requested while program runs.

2. Flexible Size => Can allocate based on input.

3. Efficient Usage => Take only what you need.

4. Manual Management (raw pointers) => Need to release memory or risk leaks.
*/



/*

vector<int>vec;Property =>

SIZE => HOW MANY USABLE MEMORY EXIST

CAPACITY => HOW MUCH MEMORY RESERVED


*/