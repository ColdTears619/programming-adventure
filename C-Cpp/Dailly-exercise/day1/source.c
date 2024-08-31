#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
  char *text = "Hello";
  int num = 1;
  printf("Text is: %s\n The size of text is: %zd\n",text, sizeof(num));
  srand(time(NULL));
  do {
    num = rand() % 20;
    printf("number comes %d\n", num);
  } while (num != 14);
  return EXIT_SUCCESS;
}
