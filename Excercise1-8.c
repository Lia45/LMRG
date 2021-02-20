/*Excercise 1-8, section 1.5.3, page 20*/
/*Write a program to count blanks, tabs, and newlines*/

#include <stdio.h>

int main(){
    int c, bl, tb, nl;
    bl = 0;
    tb = 0;
    nl = 0;
    
    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++bl;
        }
        if (c == '\t'){
            ++tb;
        }
        if (c == '\n'){
            ++nl;
        }
    }
    printf("Blank spaces: %d\nTabs: %d\nNew lines: %d\n", bl, tb, nl);
    return 0;
}