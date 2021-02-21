/*Excercise 1-9, section 1.5.3, page 20*/
/*Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank.*/

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
                putchar(' ');
                space = 0; /*Resets the flag*/
            }
            putchar(c);
        }
    }
    return 0;
}

    
   