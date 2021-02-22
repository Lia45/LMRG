/*Excercise 1-12, Section 1.5.4, page 21*/
/*Write a program that prints its input one word per line.*/

#include <stdio.h>
#include <ctype.h> /* Included because of the use of isspace(c), seen in the Reference card*/

int main(){
    int c;
    int space = 0; /* Flag for spaces, taken from class #3*/

    while ((c = getchar()) != EOF){
        if (isspace(c)){
            space = 1; /*Takes note that there is a space*/
        }
        else{ /*When it finds something that isn't a space*/
            if(space){ /*If it is any spaces, then it prints a single space*/
                putchar('\n');
                space = 0; /*Resets the flag*/
            }
            putchar(c);
        }
    }
    return 0;
}