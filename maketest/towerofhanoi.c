#include <stdio.h>
#include <stdlib.h>

void tower_of_hanoi(int, char, char, char);

int main() {
  int n;
  scanf("%d", &n);
  tower_of_hanoi(n, 'A', 'C', 'B');
  return EXIT_SUCCESS;
}

void tower_of_hanoi(int n, char from, char to, char aux) {
  if (n == 1) {
    printf("move disk 1 from %c to %c\n", from, to);
    return;
  }
  tower_of_hanoi(n - 1, from, aux, to);
  printf("move the disk %d from %c to %c\n", n, from, to);
  tower_of_hanoi(n - 1, aux, to, from);
}

