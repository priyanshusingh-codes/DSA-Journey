/*

A vector in C++ usually means:
C++ Standard Library std::vector

It is a dynamic array:
stores elements in contiguous memory
can grow/shrink automatically
gives fast random access with indexes
manages memory for you

example:
int arr[5]; => has fixed sixe
but 
vector<int>vec; => can become 1, 10, 1000 dynamically.


*/

/*

Why Vector Was Needed

Traditional arrays have problems:
int arr[5];

Problems:
size fixed at compile time
no built-in resize
no size tracking
copying awkward
unsafe pointer decay

//Vector solves all of these.

*/


/*

Anatomy of a Vector Internally

Most implementations conceptually store:

T* begin;
T* end;
T* capacity_end;

Meaning:
begin → first element
end → one past last used element
capacity_end → one past allocated block

So:
[10][20][30][ ? ][ ? ]
 ^
 begin

         ^
         end

                 ^
            capacity_end

size = used elements = 3
capacity = allocated slots = 5

*/

/*

Important Terms
Size
How many actual elements exist.
             
        v.size()

Capacity
How many can fit before reallocation.

        v.capacity()
Empty
        v.empty()


6. Core Operations

Insert at End
        v.push_back(5);        //Adds element.

        Remove Last
        v.pop_back();

Access
        v[0]
        v.at(0)
        v.front()
        v.back()

Difference:
        v[100]

No bounds check.
        v.at(100)
Throws exception.

*/



/*

Iteration
Index Based
for(int i=0;i<v.size();i++)
    cout << v[i];


Range Based
for(int x : v)
    cout << x;

    
Iterator Based
for(auto it = v.begin(); it != v.end(); ++it)
    cout << *it;

*/