#include <stdio.h>
#include <math.h>
int main()
{
    int bin, s = 0, i = 0;
    printf("Enter a binary number to get its decimal equivalent:\n");
    scanf("%d", &bin);
    while (bin > 0)
    {
        if (bin % 10 != 0 && bin % 10 != 1)
            printf("Invalid Binary Number !");
        else
            s += (int)pow(2, i);
        bin /= 10;
        i++;
    }
    printf("%d", s);
    return 0;
}