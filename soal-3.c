#include <stdio.h>

int main() {
  int z, i, y = 1;
  printf("masukkan angka =");
  scanf("%d", &z);
  
  for ( i = 1; i <=z ; i++)
  {
    y *= i;
  }
  printf("hasil %d! adalah = %d", z, y);

  return 0;
}