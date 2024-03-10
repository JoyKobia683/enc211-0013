#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float start, end, increment, pounds, kilograms, miles, kilometers;

    printf("Pounds to Kilograms Conversion Table\n");
    printf("------------------------------------\n");
    printf("Pounds\t\tKilograms\n");

    for (pounds = 0; pounds <= 100; pounds += 10)
    {
        kilograms = pounds * 2.20462262;
        printf("%6.2f\t\t%6.2f\n", pounds, kilograms);
    }
    return 0;
}
