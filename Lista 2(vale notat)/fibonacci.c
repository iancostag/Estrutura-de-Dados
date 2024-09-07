#include <stdio.h>

long int fibonacciSoma[1000];

long int fibonacci (int n){
    if (n <= 1)  return n;
    
    if (fibonacciSoma[n] != 0)  return fibonacciSoma[n];
    
    fibonacciSoma[n] = fibonacci(n-2) + fibonacci(n-1);
    return fibonacciSoma[n];
}

