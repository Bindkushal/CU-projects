/* sum of integer */

#include<stdio.h>

int main ()
{
    int sum = 0;
    for (int i = 101 ; i < 200; i++)
    {
        if (i % 5 == 0)
        {
            sum +=i;
        }
    }

    printf(" The sum of integer greter the 100 and less then 200 and divisible by 5 is: %d\n " ,sum);
}
