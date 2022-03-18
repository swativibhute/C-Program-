#include <stdio.h>
int main() {
  int n, i,r;
  printf("Enter an integer: ");
  scanf("%d", &n);
  for (i = 1; i <= 10; ++i) {
     r=n*i;
    printf("%d ",r);
  }
  return 0;
}