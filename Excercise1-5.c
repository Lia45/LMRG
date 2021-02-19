#include <stdio.h>

/*print Fahrenheit-Celsius table from 300 degrees to 0*/

int main(){

    int fahr;

    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %7.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
