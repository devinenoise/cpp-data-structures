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

## Pointer to a structure

A pointer uses `->` to access a structure instead of a dot operator.

## Functions

A function is a group of related instructions that performs a specific task. They are also known as modules or procedures. Breaking your program into smaller functions used inside of a main function is called Modular or Procedural programming. One function cannot access the variables of another function.

## Parameter Passing

In call by value, the changes in formal parameters will not affect the actual parameters. Call by value should be used when you want to process something and return the result.

In call by address, the actual parameters address are passed to formal parameters and the formal parameters must be pointers.

In call by reference, the formal function parameters need to ampersand `&` to to change the actual parameters. It is possible, that the function will run inline depending on the compiler.

## Array as parameter

Arrays are passed only by address, never by value. When an array is a formal parameter, it's actually a pointer to an array.

## Structure as parameter

A structure can be called by value, address, and reference. When using value, the formal parameters will not affect the actual parameters. In call by reference, the formal parameters will change actual parameters. If the structure contains an array, you can still pass by value.

## Monolithic and Modular Programming

Monolithic programming is tightly coupled code that makes assumptions about the other parts of the code. Monolithic programs work as a single container that has every component that the application needs: one database, one application, one server to deploy to, and one container to share every component. Modular programming is loosely coupled code that allows a program to be more readable, maintainable, scalable, and portable. It also makes it easier for a team of individuals to work together. Modular coding can be problematic in that it creates more work upfront to link modules together, testing takes longer, and the architecture needs to be thought out ahead of time to integrate the different modules.

## Classes

A class provides the blueprints for objects, so basically an object is created from a class. You declare objects of a class with exactly the same sort of declaration that you declare variables of basic types. A class definition starts with the keyword class followed by the class name; and the class body, enclosed by a pair of curly braces. A class definition must be followed either by a semicolon or a list of declarations. Class members can be made available as public or private. Template classes allow you to use interchangeable data types such as `int` and `float` without having the rewrite the code for each data type.
