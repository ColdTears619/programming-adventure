#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int c = getchar();
  int bcn = 0, tcn = 0, nlcn = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ') 
    {
      ++bcn;
    } 
    if (c == '\t')
      ++tcn;
    if (c == '\n')
      ++nlcn;
    putchar(c);
  }
 /* if (temp2 == '1' || temp2 == '0') {
    printf("0 or 1 detected!");
  }
  */
  printf("block counter: %d \ntab counter: %d\nnewline counter: %d", bcn, tcn, nlcn);
  return EXIT_SUCCESS;
}
