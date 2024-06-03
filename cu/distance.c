/* distance of two cities*/

#include<stdio.h>

int main ()
{
    float km, m, cm, inch, f;

    printf("Enter the distance of two cities in K.M: ");
    scanf("%f" ,&km);

    m = km * 1000;
    cm = km * 1000 *100;
    inch = km * 39370.08;
    f = km * 3280.84;


// testting the codes git option how dos it works, its kind of comples and cool


    printf("Distance in meter: %f\n ", m);
     printf("Distance in centimeter: %f\n ", cm);
      printf("Distance in inch: %f\n ", inch);
       printf(" Distance in f: %f\n ", f);

       return 0;


}
