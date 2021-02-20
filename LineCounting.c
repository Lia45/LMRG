/*Line Counting, section 1.5.3, page 19*/
/*Count lines in input*/

#include <stdio.h>

int main(){
    int c, nl;
    nl = 0;
    
    while ((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
    }
    printf("# of lines: %d\n", nl);
    return 0;
}