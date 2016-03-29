#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  if (!argv[1]) {
    printf("%d\n", i);
    return 0;
  }
  while (i < argc) {
    i++;
  }
  printf("%d\n", (i-1));
  return 0;
}
