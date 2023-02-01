# C-language
#### The CPrimerPlus_Learning project  is the one for introduction practice to C language, contains the basic usage, functions, class, etc. 
#### Based on C Primer Plus 6th edition, this can be considered as a learning process record. 
#### The topics for each chapter will be listed in ascending order.

 - Chapter02
   - Chapter2.1 Get to know the first C program
   - Chapter2.2 `printf()` method and display integer number, usage of `%d`
   - Chapter2.6 two functions, call function
 -  Chapter03
    - Chapter3.1 user input, `scanf()`
    - Chapter3.3 decimal, octal, hexadecimal to print decimal number 100   
       exceed decimal and unsigned integer range
    - Chapter3.4 range display for `unsigned`, `short`, `long`, `long long` variable types
 

# ----------------------------------------
# C language online class - From BILIBILI
### Class 2 contents:
1. variables types: 
   - use `#define` keyword to create contant variables
   - use `enum` to create variables
2. String type:
   - use array to contain the string variable: `char arr1[] = "abc";`
   - `char arr2[] = {'a', 'b', 'c'};` this will give non-correct result, the reason of it is because at the end of the 
array, there is a non-appear `'\0'`, while this is used to tell the string that `this is the end position`, hence if we directly print the content of it, 
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
### Class 4 contents: 
1. Pointers introduction
### Class 6 contents - conditions and loops:
1. If statements and practices
2. switch statements, notice: `break;` **does not has to be included** at the end of each case.