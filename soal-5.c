#include <stdio.h>


int fibonacci(int n);

int main() {
    int n = 10;

  
    printf("Deret Fibonacci dari 1 sampai %d:\n", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


int fibonacci(int n) {
    if (n <= 1) {
        return n; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}
