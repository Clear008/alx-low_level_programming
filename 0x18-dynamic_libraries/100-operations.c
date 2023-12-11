#include <stdio.h>

// addition
int add(int a, int b) {
    return a + b;
}

// substraction
int sub(int a, int b) {
    return a - b;
}

// multiplication
int mul(int a, int b) {
    return a * b;
}

// division
int div(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

// remainder of the division 
int mod(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0;
    }
    return a % b;
}
