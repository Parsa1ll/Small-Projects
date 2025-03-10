#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main (void)
{
    long num = get_long("Number: ");
    long num2 = num;
    int nim = 0;
    string check;
    while (num2 > 0)
    {
        num2 = num2/10;
        nim++;
    }
    if ((nim !=13) && (nim !=15) && (nim !=16))
    {
        printf("INVALID\n");
        return 0;
    }
    int numc = num / pow(10, (nim - 2));
    if (nim == 15 && (numc == 34 || numc == 37))
    {
        check = "AMEX";
    }
    else if (nim == 16 && (numc == 51 || numc == 52 || numc == 53 || numc == 54 || numc == 55))
    {
        check = "MASTERCARD";
    }
    else if ((nim == 16 || nim == 13) && numc/10 == 4)
    {
        check = "VISA";
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }
    int csa = 0;
    for (int i = 1; i <= nim; i++)
    {
        int cs = num % 10;
        num = num/10;
        if (i%2==0)
        {
            cs = cs*2;
            if (cs >= 10)
            {
                cs = (cs % 10) + 1;
            }
        }
        csa = csa + cs;
    }
    if (csa%10!=0)
    {
        check = "INVALID";
    }
    printf("%s\n", check);
}
