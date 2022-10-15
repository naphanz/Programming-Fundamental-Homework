#include <stdio.h>
int main() {
unsigned int x = 4e6;
unsigned int prev = 0;
unsigned int curr = 1;
unsigned int next;
unsigned int total = 0;
while (curr < x) {
 next = prev + curr;
prev = curr;
curr = next;
if (curr % 2 == 0) {
total += curr;
  }
}

printf("%d", total);
}
