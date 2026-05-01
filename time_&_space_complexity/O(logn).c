/*

O(log n) means runtime grows with the number of times you can repeatedly divide the input (usually by 2).


//Each step removes a huge chunk of work.



Example Growth (base 2 usually)
n = 8       -> 3 steps
n = 16      -> 4 steps
n = 32      -> 5 steps
n = 1024    -> 10 steps
n = 1,000,000 -> ~20 steps

Time
 ^
 |        ______
 |      /
 |    /
 |   /
 |  /
 | /
 |/________________> n


Where O(log n) Appears :
Searching
Binary Search
Trees

Balanced BST operations:
insert
delete
search
Heaps / Priority Queues
push
pop
Divide and Conquer Recursion

Some recursive splits.
*/



/*
Binary Search :

int l = 0, r = n - 1;

while(l <= r) {
    int mid = (l + r) / 2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) l = mid + 1;
    else r = mid - 1;
}

*/