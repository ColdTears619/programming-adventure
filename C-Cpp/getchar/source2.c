/*
* Remove each string of one or more blanks
*/

#include <stdio.h>
int main() {
    int c, previous = '\0';

    while ((c = getchar()) != EOF) {
        if (c == ' ' && previous != ' ') {
          continue;
        } else {
            putchar(c);
        }
        previous = c;
    }

    return 0;
}

