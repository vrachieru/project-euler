#include <stdio.h>

int x = y = 1;
int sum = aux = 0;

int main() {
  while (y < 4000000) {
    if (y % 2 == 0) {
      sum += y;
    }
    aux = x;
    x += y;
    y = aux;
  }

  printf("%i", sum);

  return 0;
}
