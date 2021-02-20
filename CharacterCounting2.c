/*Character Counting, section 1.5.2, page 18*/
/*Count Characters in input; 2nd version*/

#include <stdio.h>

int main(){
    double nc;

    for (nc = 0; getchar() != EOF; ++nc){
        printf("");/*Body of the loop is "empty" because all of the work is done in the test and increment parts.
        C requires that a for statement have a body.*/
    }
    printf("Characters: %.0f\n", nc); /*%.0f suppresses printing of the decimal point and the fraction part*/
    return 0;
}