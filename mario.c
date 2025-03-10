#include <stdio.h>

int main (void)
{
    int height;
    do
    {
        height = 5;
    } while (1 > height || height > 50);

    for (int i = 1; i <= height; i++)
    {
        for (int a = 1; a <= height+1+i; a++)
        {
            if ((height+1 < a) || (a >= height +1 - i && a < height+1))
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}