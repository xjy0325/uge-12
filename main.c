/*
Title: Write a program that simulates the distribution of the sum of two dice.
Throw the dice 50000 times and store the occurrences of the possible sums (2-12)
in an array. Author: Xingjia Yu
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// global area
int base[11] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int record[11] = {0};

// function to generate the sum and record it
void generate(int a, int b) {
  int sum = a + b;
  for (size_t j = 0; j < 11; j++) {
    if (sum == base[j]) {
      record[j]++;
    }
  }
}

int main(void) {
  // randomseed
  srand(time(NULL));

  // result comparation

  // array for occurrences increment

  // generate and increment
  for (size_t i = 0; i < 50000; i++) {
    generate(rand() % 6 + 1, rand() % 6 + 1);
  }

  // print
  for (int i = 0; i < 11; i++) {
    printf("%d: %d\n", 2 + i, record[i]);
  }
}