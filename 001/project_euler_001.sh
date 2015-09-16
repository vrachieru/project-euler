#!/bin/bash

solution_1() {
  sum=0

  for i in {0..999}; do
    if [ $(($i % 3)) == 0 ] || [ $(($i % 5)) == 0 ]; then
      sum=$(($sum + $i))
    fi
  done

  echo $sum
}

solution_2() {
  sum=0

  for i in $(sort -u <(seq 0 3 999) <(seq 0 5 999)); do
    sum=$(($sum + $i))
  done

  echo $sum
}

solution_2