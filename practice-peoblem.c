#include<stdio.h>

// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
int fibocacci(int n);

int fibocacci(int n){
    if(n == 1 || n == 2){
        return n - 1;
    }
    return fibocacci(n - 1) + fibocacci(n - 2);
}

int main(){
    int n = 4;
    printf("The value of fibonacci series at %d is %d", n, fibocacci(n));
    return 0;
}
