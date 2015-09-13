#!/usr/bin/env python

def next(n):
  sum = 0
  while n != 0:
    digit = n % 10
    sum += digit * digit
    n /= 10
  return sum

result = 1
for i in range(2, 10000000):
  current = i
  while current != 1 and current != 89:
    current = next(current)
    if current == 89:
        result+=1

print result