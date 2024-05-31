/*
* implementation WC in C 
*/

#include <stdio.h>
#include <stdlib.h>
#define IN    1
#define OUT   0
int main()
{
  int lcn = 0, wcn = 0, ccn = 0, c, state = OUT;
  while ((c = getchar()) != EOF)
  {
    ++ccn;
    if (c == ' ' || c == '\t' || c == '\n') 
    {
      state = OUT;
    }
    else if(state == OUT)
    {
      state = IN;
      ++wcn;
    }
    if(c == '\n')
      ++lcn;
  }

  printf("line counter: %d\nword counter: %d\ncharacter counter: %d\n", lcn, wcn, ccn);
  return EXIT_SUCCESS;
}
