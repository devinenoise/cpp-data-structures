# Data Structures

Data structure is the way you organize data in the main memory during execution of a program.

## Arrays

An array is a collection of similar data elements.

_Declaration_ : int A[5];

_Initialization_ : int B[5]={2,4,6,8,10};

If you have an array of some size and don't define the elements they will become zero by default.

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
