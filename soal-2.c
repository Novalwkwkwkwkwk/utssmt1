#include <stdio.h>

int is_prime(int n);

int main() {
  int a;

  printf("Masukkan angka: ");
  scanf("%d", &a);

  if (is_prime(a)) {
    printf("%d adalah bilangan prima\n", a);
  } else {
    printf("%d bukan bilangan prima\n", a);
  }

  return 0;
}

int is_prime(int n) {
  if (n <= 1) {
    return 0;
  }

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0; 
    }
  }

  return 1;
}
