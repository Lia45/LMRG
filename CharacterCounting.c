/*Character Counting, section 1.5.2, page 18*/
/*Count characters in input; 1st version*/

#include <stdio.h>

int main(){
    long nc;

    nc = 0;
    while (getchar() != EOF){
        ++nc;
    }
    printf("Characters: %1d\n", nc);
    return 0;
}
