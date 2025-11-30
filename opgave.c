#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
const char *WORDS[] = {"cat",   "jumps",   "red", "orange",
                       "color", "quickly", "moon"};
const char *select[1000];

void WordsSelect(size_t n) {
  for (size_t i = 0; i < n; n++) {
    select[i] = WORDS[rand() % (sizeof(WORDS) / sizeof(WORDS[0]))];
  }
}

void Print(size_t n) {
  for (size_t i = 0; i < n; n++) {
    printf("%s", select[i]);
  }
}

int main() {
  srand(time(NULL));
  WordsSelect(3);
}