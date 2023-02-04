# C-language

#### The CPrimerPlus_Learning project  is the one for introduction practice to C language, contains the basic usage, functions, class, etc

#### Based on C Primer Plus 6th edition, this can be considered as a learning process record

#### The topics for each chapter will be listed in ascending order

- Chapter02 - **C-language introduction**
  - Chapter2.1 Get to know the first C program
  - Chapter2.2 `printf()` method and display integer number, usage of `%d`
  - Chapter2.6 two functions, **call function**
- Chapter03 - **Data and C-language**
  - Chapter3.1 user input, `scanf()`
  - Chapter3.3 decimal, octal, hexadecimal to print decimal number 100
       exceed decimal and unsigned integer range
  - Chapter3.4 range display for `unsigned`, `short`, `long`, `long long` variable types
  - Chapter3.7 `Escape character`
- Chapter04 - **Strings, inputs and outputs**
  - Chapter4.1 Demonstrate user interaction by using `scanf()` and `printf()` along with define array to contain strings
  - Chapter4.2 the usage of `%s`
  - Chapter4.3 
    - `#define` keyword for constants
    - Chapter4.3.2: Use `limit.h` and `float.h` header files to demonstrate the express constants
  - Chapter4.4 the usage of `control field width`
- Chapter05 - **Operators, expressions and statements**
  - Chapter5.1 - While loops
  - Chapter5.2 - basic operators
  - Chapter5.3 Other Operators
    - Chapter5.3.1 `sizeof()` operator
    - Chapter5.3.2 `%` modulus operator, can only be used for integer calculations.   
    **Negative numbers?** for modulus operations, if the first number is negative, then the result is negative, likewise, if the first number is positive, then the result is positive.
    - Chapter5.3.3: `++` increment operator. **Note**: if the increment operator is at the front of the variable, then the variable increase 1 first, then do other calculations or assign values, if the increment operator is at the end of the variable, then do other calculations or assign values first, then increase 1.
  - Chapter5.4 Expression and statements
  - Chapter5.5 Type conversion
  - Chapter5.6 Functions with parameters
    - **Difference: formal argument and actual argument**: 
      - `Formal argument`: The parameter get involved when **declaring** the function. Called as **parameter**
      - `Actual argument`: The parameter get involved when the **actual value** passed to the function. Called as **argument**
      - As example: In Chapter5.6 folder, check program `pound.c`
- Chapter06 - **Loops**
  - `While` loops
# ----------------------------------------

# C language online class - From BILIBILI

### Class 2 contents

1. variables types:
   - use `#define` keyword to create contant variables
   - use `enum` to create variables
2. String type:
   - use array to contain the string variable: `char arr1[] = "abc";`
   - `char arr2[] = {'a', 'b', 'c'};` this will give non-correct result, the reason of it is because at the end of the array, there is a non-appear `'\0'`, while this is used to tell the string that `this is the end position`, hence if we directly print the content of it,
the last element will give us a `random value`.
   - so if we define the array like this: `char arr3[] = {'a', 'b', 'c', '\0'};`, the result will give us the same as the first condition.
   - this is how to print the string: `printf("%s\n", arr1);`
   - usage of `strlen()` function
3. Loops:
   - While loop basic usage
4. Functions:
   - Define and call function method
5. Arrays:
   - Define and iterate arrays
   - the usage of `sizeof()` function

### Class 4 contents

1. Pointers introduction

### Class 6 contents - conditions and loops

1. If statements and practices
2. switch statements, notice: `break;` **does not has to be included** at the end of each case.
3. Loops:
   - While loops, also the `getchar()` is for user input, `putchar()` is for output
   - Continue keyword: jump rest of the statements within current loop time.
   - For loops

### Class 9 contents - Functions and methods
1. Define functions and methods, call functions and methods within the main function.