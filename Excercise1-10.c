/*Excercise 1-10, section 1.5.3, page 20*/
/*Write a program to copy its input to its output, replacing each
tab by \t, each backspace by \b, and each backslash by \\. This makes tabs
and backspaces visible in an unambiguous way.*/

#include <stdio.h>

int main(){
    int c, flag;

    while ((c = getchar()) != EOF){
        flag = 0;
        if (c == '\t'){
            putchar('\\'); /*Prints '\'. Double \\ indicates that only one \ is going to be shown
            http://platea.pntic.mec.es/vgonzale/cyr_0204/cyr_01/control/lengua_C/entra_sal.htm */
            putchar('t'); /*Prints 't'*/
            putchar(' '); /*Added a space so it's easier to read the results*/
            flag = 1;
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
            putchar(' ');
            flag = 1;
        }
        if (c == '\\'){
            putchar('\\');
            putchar('\\');
            putchar(' ');
            flag = 1;
        }
        if (flag == 0){
            putchar(c);
        }
    }
    return 0;
}