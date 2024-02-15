# Learning C++
Notes from learning C++ using W3Schools.com.

This notes document does not go through every single topic in detail. Some topics are skipped, while others are briefly explained. Go to [W3Schools.com] for full topic explanations. Some of the code examples are taken from W3Schools.

## Variables
* `int` -> stores whole numbers w/out decimals and fractional counterparts
* `double` -> stores floating point numbers (numbers w/ decimals)
* `char` -> stores singal characters (i.e. 'a'); **must be surrounded by single quotes**
* `bool` -> stores boolean values; _true_ or _false_

**Declaring Variables**
*Syntax:* `type variableName = value;`
*Syntax (one line, multiple variables):* `type variable1 = value, variable2 = value, variable3 = value;`

**Constants**
contant -> _unchangeable_ and read only; the value must be initally stated

*Syntax:* `const type variableName = value;`

## User Input
* Keyword -> `cin >> variable;`

The `variable` is where the user input is stored. 

**Example:**
```cpp
int x;
cout << "Type a number ";
cin >> x;
cout << x;
```
For dealing with strings, refer to [User Input: Strings]

## Data Types
| Data Type | Size         | Description                                |
|-----------|--------------|--------------------------------------------|
| boolean   | 1 byte       | stores true or false values                |
| char      | 1 byte       | stores a single char/letter/number         |
| int       | 2 or 4 bytes | stores whole numebrs w/out decimals        |
| float     | 4 bytes      |                                            |
| double    | 8 bytes      | stores decimal values; upto 15 dec. places |     

## Operators
In C++, operators are split into the following sub-categories:
* Arithmetic Operators
* Assignment Operators
* Comparison Operators
* Logical Operators
* Bitwise Operators

### Arithmetic Operators 
Arithmetic Operators are used to perform common mathematical operations.

| Operator | Name           | Description                                 | Example |
|----------|----------------|---------------------------------------------|---------|
| +        | Addition       | Adds together two values                    | x + y   |
| -        | Subtraction    | Subtracts one value from another            | x - y   |
| *        | Multiplication | Multiplies two values                       | x * y   |
| /        | Division       | Divides one value by another                | x / y   |
| %        | Modulus        | Returns the division remainder              | x % y   |
| ++       | Increment      | Increases the value of a variable by 1      | ++x     |
| --       | Decrement      | Decreases the value of a variable by 1      | --x     |

### Assignment Operators
Assignment Operators are used to assign values to variables.

| Operator | Example | Same As    |
|----------|---------|------------|
| =        | x = 5   | x = 5      | 
| +=       | x += 3  | x = x + 3  | 
| -=       | x -= 3  | x = x - 3  |
| *=       | x *= 3  | x = x * 3  | 
| /=       | x /= 3  | x = x / 3  | 
| %=       | x %= 3  | x = x % 3  | 
| &=       | x &= 3  | x = x & 3  | 
| \|=      | x \|= 3 | x = x \| 3 | 
| ^=       | x ^= 3  | x = x ^ 3  |
| >>=      | x >>= 3 | x = x >> 3 |
| <<=      | x <<= 3 | x = x << 3 | 

### Comparison Operators
Comparison Operators are used to compare two values (or variables). The return value of a comparison is either `1` or `0` which mean *true* and *false*, respectively.

| Operator | Name                     | Example   |
|----------|--------------------------|-----------|
| ==       | Equal to                 | x == y    |
| !=       | Not equal                | x != y    |
| >        | Greater than             | x > y     |
| <        | Less than                | x < y     |
| >=       | Greater than or equal to | x >= y    |
| <=       | Less than or equal to    | x <= y    |

### Logical Operators
Logical Operators are used similarly to [Comparison Operators] and also test for the vailidity of a statement by returning either `1` or `0`.

| Operator | Name        | Description                                        | Example            |
|----------|-------------|----------------------------------------------------|--------------------|
| &&       | Logical and | Returns true if both statements are true (^)       | x < 5 && x < 10    |
| ||       | Logival or  | Returns true if one of the statements are true (V) | x < 5 || x < 4     |
| !        | Logical not | Negates the statement (~)                          | !(x < 5 && x < 10) |

## Strings
`string` -> collection of characters

According to W3 School, you need to import strings library by including the `#include <strings>` header at the top of your C++ file.

### String Concatenation
String Concatenation is essentially adding two or more strings together to form a larger string. There are two methods that one can use when performing String Concatenation. One can either use the `+` operator or the `.append()` function to concatenate two or more strings together.

*Example Code:*
```cpp
string firstName = "John"
string lastName = "Doe"

cout << firstName + " " + lastName << endl; // Method 1
cout << firstName.append(lastName) << endl; // Method 2
```

**Note that C++ uses the `+` operator for both *String Concatenation* and *Operations***
* In the case of using the `+` operator for numbers, the operator will **add** the numbers together.
* As for strings, the `+` operator will **combine** the two strings.

### String Length
One can obtain the length of a string through the built-in `length()` function. An alias of the `length()` function is `size()`. As per W3 Schools, both do the exact same thing: return the length of a string.

### Access Strings
One can access the characters in a string by referring to the character's index using the square brackets (`[]`). It is also important to remember that string indexes begin at **0** and *NOT* 1.

You can use this technique to change the character in a string.

*Example Code:*
```cpp
string myString = "Hello";
myString[0] = 'J';
cout << myString;
```

### Special Characters
The backslash (\) turns special characters into string characters. 

| Escape Character | Result   | Description           |
|------------------|----------|-----------------------|
| \'               | '        | Single quote          |
| \"               | "        | Double quote          |
| \\               | \        | Backslash             |
| \n               | New Line | Represents a new line |
| \t               | Tab      | Represents a tab      |

### User Input: Strings
Although it is possible to use the extraction operator, `>>`, on cin to store a string entered by a user, only one word will be stored into the variable since the `cin` function considers a space to be a terminating character.

To fix this issue, use the `getline(function, storingVariable)`.
--> In our case, this will be `getline(cin, storingVariable)`.

We don't have to assign this function to a separate variable. When we want to reference it in our code, we can just reference the `storingVariable`.

## C++ Math
* Built-In Functions: `max(x, y)`, `min(x, y)`; returns the largest and the smallest of the two inputted numbers, respectively.
* Header-Required Functions -> functions that require the `#include <cmath>` header. Functions include `sqrt()`, `round()`, `pow()`, `log()`, etc.

Other functions:
| Function      | Description                                                           |
|---------------|-----------------------------------------------------------------------|
| abs(x)        | Returns the absolute value of x                                       |
| acos(x)       | Returns the arccosine of x                                            |
| asin(x)       | Returns the arcsine of x                                              |
| atan(x)       | Returns the arctangent of x                                           |
| cbrt(x)       | Returns the cube root of x                                            |
| ceil(x)       | Returns the value of x rounded up to its nearest integer              |
| cos(x)        | Returns the cosine of x                                               |
| cosh(x)       | Returns the hyperbolic cosine of x                                    |
| exp(x)        | Returns the value of e^x                                              |
| expm1(x)      | Returns e^x - 1                                                       |
| fabs(x)       | Returns the absolute value of a floating point number x               |
| fdim(x, y)    | Returns the positive difference between x and y                       |
| floor(x)      | Returns the value of x rounded down to its nearest integer            |
| hypot(x, y)   | Returns sqrt(x^2 + y^2) without intermediate overflow or underflow    |
| fma(x, y, z)  | Returns x*y+z without losing precision                                |
| fmax(x, y)    | Returns the highest value of a floating point x and y                 |
| fmin(x, y)    | Returns the lowest value of a floating point x and y                  |
| fmod(x, y)    | Returns the floating point remainder of x/y                           |
| pow(x, y)     | Returns the value of x to the power of y                              |
| sin(x)        | Returns the sine of x (x is in radians)                               |
| sinh(x)       | Returns the hyperbolic sine of x                                      |
| tan(x)        | Returns the tangent of an angle                                       |
| tanh(x)       | Returns the hyperbolic tangent of x                                   |

## C++ Conditional Statements/Decisions (incl. Switch Statements)
Conditional Statements/Decisions --> `if _______ then _______`

**C++ Conditional Statements**
* Use `if` to specify a block of code to be executed, if a specified condition is true
* Use `else` to specify a block of code to be executed, if the same condition is false
* Use `else if` to specify a new condition to test, if the first condition is false
* Use `switch` to specify many alternative blocks of code to be executed

*Example Code:*
```cpp
if (condition) {
    // block of code to be executed if the condition is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition is false
}

```

**Short Hand `if ___ else ___`**
*Syntax:* `variable = (condition) ? expressionTrue : expressionFalse;`

*Example Code:*
```
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result;
```

**Switch Statements**
*Syntax:* 
```cpp
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
   // code block
} 
```
* The switch expression is evaluated once
* The value of the expression is compared with the values of each case
* If there is a match, the associated block of code is executed
* The break and default keywords are optional; the default is the output that the code will run if there are no matches

*Example Code:*
```cpp
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
```

## Loops
There are three types of loops that will be covered in this section: `for` loops, `while` loops, and `for-each` loops.

Certainly! Here's the provided explanation and code converted into Markdown format:

### `while` Loop:

The `while` loop in C++ repeats a block of code as long as a specified condition is true. The condition is evaluated before executing the loop body. If the condition is initially false, the loop body will not be executed at all.

#### Syntax:
```cpp
while (condition) {
    // code block to be executed
}
```

#### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (i < 5) {
        cout << i << " ";
        i++;
    }
    return 0;
}
```

#### Output:
```cs
0 1 2 3 4
```

### `do/while` Loop:

The `do/while` loop is similar to the `while` loop, but it guarantees that the loop body is executed at least once before the condition is tested. This means that even if the condition is initially false, the loop body will be executed once.

#### Syntax:
```cpp
do {
    // code block to be executed
} while (condition);
```

#### Example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while (i < 5);
    return 0;
}
```

#### Output:
```cs
0 1 2 3 4
```

**In summary:**
- `while` loops evaluate the condition before executing the loop body.
- `do/while` loops execute the loop body at least once, then evaluate the condition.

Both types of loops are used for repetitive tasks where you don't know in advance how many iterations are needed.

## Arrays
- to get the size of an array, you can use the `sizeof()` function

## Structures (`struct`)
* Structures (*Syntax:* struct {} nameOfStructure;) --> group several related variables into one place. Each variable within the structure is called a member of the structure.

To access members of a structure, use the nameOfStructure and the `.` to target the specific variable.

```cpp
// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
```

```cpp
struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
```

*Named Structures:*
By giving a name to the structure, you can treat it as a data type. This means that you can create variables with this structure anywhere in the program at any time.

To create a named structure, put the name of the structure right after the `struct` keyword:

```cpp
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```

To declare the variable, you would then do
```cpp
myDataType myVar;
```

**Difference between the Variable and Named Structures** (Response by ChatGPT)
The difference between the two code snippets lies in how they define and use a structure (struct) in C++.

1. **Named Structure Definition:**
```cpp
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```
In this case, a structure named `myDataType` is defined. This structure contains two data members: an integer `myNum` and a string `myString`. However, no variable of type `myDataType` is declared. To create a variable of this type, you would later declare it like this:
```cpp
myDataType myVariable;
```

2. **Anonymous Structure with Variable Declaration:**
```cpp
struct {
  int myNum;
  string myString;
} myStructure;
```
In this case, an anonymous structure (a structure without a name) is defined, and simultaneously a variable `myStructure` of this anonymous structure type is declared. This means you can directly use `myStructure` as an instance of the structure defined within the struct block. 

The key difference is that in the first example, the structure is defined and named `myDataType`, and then you can create variables of this type later on. In the second example, an unnamed structure is defined and a variable of this type is declared in the same line. You cannot create additional variables of this unnamed structure type elsewhere in your code.

## References
From how I understand references, it essentially creates another alias for an already initialized variable. This is done by adding an ampersand (`&`) in front of the new variable name and is set equal to the variable's equivalent.

For example:
```cpp
string animal = "Pizza";
string &desertAnimal = animal;

cout << animal;
cout << desertAnimal;

// Both of these output the same thing
```

The `&` can also be used to find the memory address of a variable.
```cpp
string food = "Pizza";

cout << &food; // Outputs 0x6dfed4
```

## Pointers
A pointer **stores** the memory address as its value.

- **Pointer Declaration and Initialization:**
  - Declaring a pointer: You use the asterisk (*) symbol followed by the data type to declare a pointer.
    ```cpp
    int *ptr; // Declares a pointer to an integer
    ```
  - Initializing a pointer: Assign the memory address of a variable to a pointer using the address-of operator (&).
    ```cpp
    int num = 10;
    int *ptr = &num; // Initializes ptr with the address of num
    ```

- **Dereferencing Pointers:**
  - To access the value stored at the memory address pointed to by a pointer, you dereference the pointer using the asterisk (*) symbol.
    ```cpp
    cout << *ptr; // Outputs the value stored at the address pointed to by ptr (outputs: 10)
    ```

- **Pointer Arithmetic:**
  - You can perform arithmetic operations on pointers, which adjusts the memory address based on the size of the data type.
    ```cpp
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr points to the first element of the array
    ptr++; // Moves ptr to the next element
    ```

- **Null Pointers:**
  - A null pointer points to no memory address and is often used to indicate that a pointer does not point to a valid object.
    ```cpp
    int *ptr = nullptr; // Initializes ptr as a null pointer
    ```

- **Pointer and Arrays:**
  - Arrays and pointers are closely related; an array name can be used as a pointer to its first element.
    ```cpp
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr points to the first element of the array
    ```

- **Pointers and Functions:**
  - Pointers are commonly used in functions to pass arguments by reference or to return dynamically allocated memory.
    ```cpp
    void changeValue(int *ptr) {
        *ptr = 20;
    }
    int main() {
        int num = 10;
        int *ptr = &num;
        changeValue(ptr); // Changes the value of num to 20
    }
    ```

Understanding pointers is crucial for managing memory effectively, manipulating data structures, and optimizing code performance in C++.

### Dereferencing Pointers
We used the pointer variable to get the memory address of a variable (used together with the & reference operator). However, you can also use the pointer to get the value of the variable, by using the * operator (the dereference operator):

```cpp
string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
```

## Functions
Functions are very simple and easy to understand. Their basic syntax is `returnType functionName(parameter)`. Note that a function is not required to have a parameter. The returnType is exactly what it sounds lile. 

*## -- ## -- ## --* OBJECT ORIENTED PROGRAMING *## -- ## -- ## --*

## Object-Oriented Programing (OOP)
Procedural programming is about writing procedures or functions that perform operations on the data, while object-oriented programming is about creating objects that contain both data and functions.

*Advantages with OOP:*
* faster and easier to execute
* clear structure for programs
* keeps the code simple/easy to maintain, modify, and debug
* makes it possible to create full reusable applications with less code and shorter development time

### Classes and Objects
*Syntax:* 
```cpp
class ClassName {

  // your class stuff goes here

}; // YOU NEED A SEMICOLON AT THE END OF THE CLASS DEFINITION
```

**Class Methods** are just functions that belong to a class. For example:
```cpp
class MyClass {        // The class
  public:              // Access specifier
    void myMethod() {  // Method/function defined inside the class
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```

Another way to create a class method is by by declaring it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution `::` operator, followed by the name of the function:
```cpp
class MyClass {        // The class
  public:              // Access specifier
    void myMethod();   // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}
```

