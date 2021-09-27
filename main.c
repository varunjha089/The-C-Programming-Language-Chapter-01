// EXERCISE 1.9
#include <stdio.h>

#define NONBLANK 'a'

int main() {
    int c, lastc;

    lastc = NONBLANK;
    while ((c = getchar()) != EOF){
        if (c != ' '){
            putchar(c);
        }

        if (c == ' '){
            if (lastc != ' '){
                putchar(c);
            }
        }

        lastc = c;
    }

    return 0;
}
