#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

// These are constants/literals. Note the syntax carefully
#define LENGTH 8
#define WIDTH 10

// This is also constants/literals
const int DEPTH = 100;

// Prints out hello world
int hello_world() {
    printf("Hello, World!\n");
    return 0;
}

int print_integer_types() {
    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);

    return 0;
}

int print_float_types() {
    printf("Storage size for float : %d \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );

    return 0;
}

int print_data_types() {
    printf("There are four data types: Integers, Floats, Void, and Derived");
    printf("There are many subtypes of integers");
    print_integer_types();
    printf("There are several types of floats");
    print_float_types();
    printf("Voids are used to return a void from a function, pass in nothing, or pointers to nothing");
    printf("Derived types are more complex types");
    return 0;
}

int crazy_value = 99;

void declare_variables() {
    int i = 0;
    char c = 'd';
    float f = 27.9;
    double d = 27.99999999999;
    printf("value of i : %d \n", i);
    printf("value of crazyvalue : %d \n", crazy_value);
}


void constants_literals() {
    int x;
    x = LENGTH * WIDTH * DEPTH;
    #define WHAT "What?"
    printf("Volume : %d \n", x);
    printf(WHAT);
}

void describe_storage_classes(){
    auto int month = 12; //This is the default for local variables. Only exists within the function
    register int miles = 100; //Stored in register instead of RAM. This is faster but has limitations. Can only be used locally
    static int crazy = 5; //Causes even a local variable to not be destroyed at end of program. Can be used on a global to be only visible in the current file.
    extern void constant_literals(); //Used to access a global variable or function in another class
}

void operators() {
    printf("Adding, Equality operators are as they are in Python");
    printf("&& = and, || = or, ! = not");
    printf("There are also bitwise operators");
    printf("Assignment operators very similar =, +=, -=, ...");
    int x = 10;
    sizeof(x); // gets size of x
    &x; // returns the address of x
    char y[3] = "123";
    *y; //pointer to a variable
    printf("More on precedence: https://www.tutorialspoint.com/cprogramming/c_operators.htm");
    
}

int main(int argc, const char * argv[]) {
    //hello_world();
    //print_data_types();
    //declare_variables();
    //constants_literals();
    //describe_storage_classes();
    operators();
}
