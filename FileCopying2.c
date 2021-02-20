/*File Copying, Section 1.5.1, Page 17*/
/* Copy input to output; 2nd version*/

#include <stdio.h>

int main(){
    int c;

    while ((c = getchar()) != EOF){
        putchar(c);
    }
    
    return 0;
}