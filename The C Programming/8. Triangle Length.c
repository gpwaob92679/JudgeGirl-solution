#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  printf("%d\n", a + b > c && b + c > a && b + c > b);
  return 0;
}
