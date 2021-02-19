/*File Copying, Section 1.5.1, Page 16*/

#include <stdio.h>

/* Copy input to output; 1st version*/

int main(){
    int c;

    c = getchar();
    while (c!= EOF){  /*While character is not end-of-file indicator*/
        putchar(c);
        c = getchar();
    }
}