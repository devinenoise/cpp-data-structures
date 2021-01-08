# Data Structures

Data structure is the way you organize data in the main memory during execution of a program. Every application deals with some amount of data in the main memory. A database is the arrangement of data on a hard disk. A data warehouse is an array of storage. Data warehouses are used for analyzing the business and to help make decisions using data mining algorithms. Big Data is used on the internet.

## Static Memory Allocation

Memory is divided into addressable units known as bytes. The main memory consists of the code section, _stack_, and _heap_. The _stack frame_ is used for generating and eliminating temporary variables. It's also known as Activation Record. An activation record is created for each function that is called. After execution, the AR is removed from the main memory in a LIFO (last in, first out) order. The stack is organized data.

The memory required at compile time is known as static memory allocation. The compiler decides how much memory is needed for a function by its number of variables and their sizes.

## Dynamic Memory Allocation

Heap is used for organizing or unorganized memory. It should be treated as a resource. The program cannot directly access Heap memory without the use of a pointer. A variable declared with `new` is stored in Heap. Heap memory should be explicitly requested and disposed. If not, it can cause a memory leak.

## Physical vs. Logical Data Structures

A physical data structure decides how the memory is allocated. Logical data is the discipline of insertion or deletion implemented with physical data structures.

The two types of physical data are arrays and linked lists.

Logical has five types which include:

1. Stack (linear) LIFO
2. Queues (linear) FIFO
3. Trees (non-linear)
4. Graphs (non-linear)
5. Hash Tables (tabular)

### Abstract Data Type (ADT)

A data type is a representation of data and the allowed operations on the data. Abstract is the hiding of internal details that aren't necessary for us to know for the data to be functional. The concept of ADT is related to practice of object oriented programming.

If you have a list with the values = {8, 3, 9, 4, 6, 10, 12}, the data is defined as the space for storing elements, capacity, and size. Your options with this list are to either store it as an array or a linked list. Once you have defined your data type, you can perform certain operations on it to manipulate and search the data - `add(); set(), search()` and so on.

## Arrays

An array is a collection of similar data elements grouped under one name. The array size is either static or dynamic and will be created in Stack or Heap. The array's memory size is allocated during runtime. To access an array in Heap, you must use a assign a pointer with `p = new int[5]` operator. To prevent memory leaks, it is a good practice to delete anything that takes memory space when it is no longer needed. `delete []p`

_Declaration_ : `int A[5];`

_Initialization_ : `int B[5]={2,4,6,8,10};`

If you have an array of some size and don't define the elements they will become zero by default. An array's size can't be increased because you cannot guarantee that the contiguous memory location will be available for the array to use.

A 2 dimensional array can be created by declaring row and column `int A[n][n]` indices. 2D arrays can also be created by using an array of pointers `int* B[3]` (using Stack and Heap) or a double pointer `int** C` that will point to an array of pointers (stored in Heap).

Row major order is the storing of arrays elements row by row contiguously. Column major order is the storing of array elements column by column consecutively.

### Searching

Linear searching compares elements one by one in order of the array. When searching through an array the item being searched is called a _key_ element. A search is either successful or unsuccessful. Transposition is moving a key element closer to index position 0 incrementally to speed up subsequent searches. Move to Front/Head is moving a key element to index position 0 to speed up subsequent searches. Binary searching requires a sorted array. Binary searches for a key element in the middle of a sorted list and splits them into two using a low, high, and middle parameters. Depending on whether or not the key element is below or above the middle, the search comparison will adjust to the upper or lower half to narrow in on the key element until finding it.

The worst case of time taken in Binary searches is 0(log n). Left shifting an array will remove the element at index 0. Left rotating an array will copy the element at position 0 at the end of the array. Conversely, right shift/rotation works the same way except to the right. Shifting takes 0(n) amount of time.

### Merging

_Appending_ an array means adding a new array to the end of an existing array. _Concatenation_ means taking any number of arrays and combining them into a new array. Elements in two arrays can also be compared and copied from one array to another array. Merging can only be done on sorted lists using a new array for the existing arrays to be merged into.

### Set Operations

Arrays can be compared by set operations (binary) such as union, intersection, difference and set membership. A union of sets means that the elements can be in A or B or both. In intersection, the elements belong to both sets. In difference, the elements belong to set A, but not set B. Set membership is the same as searching if an element belongs to a set.

### Linked List

A linked list is dynamic. It is a collection of nodes with variable lengths. It is always created in Heap.

## Structures

A structure is a collection of data members that are related under one name.

1. Defining a structure

`struct Rectangle { int length; int width; };`

2.  Size of a structure

The total size of a structure is the sum of its element in memory. An int is 4 bytes.

3.  Declaring a structure

`struct Rectangle r;`

`struct Rectangle r={10,15}` with initialization

4. Accessing members

Members are accessed with dot operators.

`r.length = 15;`
`r.width = 10;`

## Pointers

A pointer is an address variable that is meant for storing the address of data not the data itself. You cannot use a for each loop on a pointer.

A pointer allows a program to access Heap memory and resources outside of the program.

Pointers are also used for parameter passing.

Data variable == `int a = 10;`

Address variable == `int *p;`

Pointer initialization == `p = &a;`

Use an asterisk `*` for declaration and dereferencing. The ampersand `&` is is used when initializing.

Every pointer takes 8 bytes no matter the data type.

## Reference

A reference is an alias given to a variable. Use an ampersand `&` to declared a reference. Referencing is useful for parameter passing in small functions. A reference must be initialized when declared.

## Pointer to a Structure

A pointer uses `->` to access a structure instead of a dot operator.

## Functions

A function is a group of related instructions that performs a specific task. They are also known as modules or procedures. Breaking your program into smaller functions used inside of a main function is called Modular or Procedural programming. One function cannot access the variables of another function.

## Parameter Passing

In call by value, the changes in formal parameters will not affect the actual parameters. Call by value should be used when you want to process something and return the result.

In call by address, the actual parameters address are passed to formal parameters and the formal parameters must be pointers.

In call by reference, the formal function parameters need to ampersand `&` to to change the actual parameters. It is possible, that the function will run inline depending on the compiler.

## Array as Parameter

Arrays are passed only by address, never by value. When an array is a formal parameter, it's actually a pointer to an array.

## Structure as Parameter

A structure can be called by value, address, and reference. When using value, the formal parameters will not affect the actual parameters. In call by reference, the formal parameters will change actual parameters. If the structure contains an array, you can still pass by value.

## Monolithic and Modular Programming

Monolithic programming is tightly coupled code that makes assumptions about the other parts of the code. Monolithic programs work as a single container that has every component that the application needs: one database, one application, one server to deploy to, and one container to share every component. Modular programming is loosely coupled code that allows a program to be more readable, maintainable, scalable, and portable. It also makes it easier for a team of individuals to work together. Modular coding can be problematic in that it creates more work upfront to link modules together, testing takes longer, and the architecture needs to be thought out ahead of time to integrate the different modules.

## Classes

A class provides the blueprints for objects, so basically an object is created from a class. You declare objects of a class with exactly the same sort of declaration that you declare variables of basic types. A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations. Class members can be made available as public or private. Template classes allow you to use interchangeable data types such as `int` and `float` without having the rewrite the code for each data type.

## Time and Space Complexity

The amount of time a computer takes to process a program and the size of a data type can be defined in terms of `n`. The order of n `O(n)` is the time it takes to complete. The order of n squared `O(n^2)` is the time of each `n` element processed.

## Recursion

A function that calls itself is known as recursive. There must be a condition that terminates the recursion inside of that function or it will repeat infinitely. Recursive tracing is done in the form of a tree and it shows all of the steps a function repeats before it terminates. Recursion has two phases: calling and returning. Also known as ascending and descending, the descending phase differentiates recursion from a loop. The total number of activation records in recursion can be defined as `n+1` in the stack. The amount of time and memory used to execute is `0(n)` because each statement takes `n` amount.

A static/global variable used inside of a recursive function only creates one copy. It is called on the return phase.

### Types of Recursion

1. Tail Recursion
2. Head Recursion
3. Tree Recursion
4. Indirect Recursion
5. Nested Recursion

If the last call in a recursive function is the recursive, then it is a **tail recursion**. The processing in a tail recursion happens at the call phase and it is linear.

Conversely, if the first call in a recursive function is recursive, it is known as an **head recursion**. The processing in an head recursion is done in the return phase and it is linear.

**Tree recursion** is defined as a recursive function that calls itself more than once.

In **Indirect recursion**, there may be more than one functions and they are calling one another in a circular manner. (Example. funcA calls funcB which calls funcA)

In **Nested recursion**, a recursive function will pass the parameter as a recursive call. That means “recursion inside recursion”.

**Memoization** or tabling, is an optimization technique used to speed up computer programs by storing the results of function calls and returning the results when the same inputs occur again.

## Strings

A character set is the set of characters supported by a programming language. Because computers use numbers to compute everything, every character is defined by a numeric code called an ASCII code. ASCII codes are a subset of Unicode.

`char` is the data type used when declaring a character. Characters can be created in an array called a character array. You can store a character or an ASCII code inside a character array and they will display the same as the character.  A *string* is also an array of characters.  At the end of the string is a null character called a string terminator.  It delineates the end of the string in an array.
