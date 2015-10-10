#include <stdio.h>

int isPrime(long n) {
  if (n == 2) {
    return 1;
  }

  for (long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int largestPrimeFactor(long n) {
  long largest = 1;

  for (long i = 2; i <= 2 * n; i++) {
    if (n % i == 0 && isPrime(i)) {
      n /= i;
      largest = i;
    }
  }

  return largest;
}

int main() {
  long n = 600851475143;
  printf("%d\n", largestPrimeFactor(n));
  
  return 0;
}
