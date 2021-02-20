/*Excercise 1-6, section 1.5.1, page 17*/
/*Verify that the expression getchar() != EOF is 0 or 1*/
#include <stdio.h>

int main(){

    printf("Value of getchar: %d", getchar() != EOF);
    return 0;
}