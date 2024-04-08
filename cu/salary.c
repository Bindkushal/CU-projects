#include<stdio.h>

struct person
{
    char name[20];
    char doj[11];
    float salary;
} p[5];

int main(void)
{
    int i = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter person name: ");
        scanf("%19s", p[i].name);
        printf("Enter person Date of joining (dd-mm-yyyy): ");
        scanf("%10s", p[i].doj);
        printf("Enter person salary: ");
        scanf("%f", &p[i].salary);
    }

    printf("\n\nPerson Details:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nPerson %d Detail", i + 1);
        printf("\nName = %s", p[i].name);
        printf("\nDOJ = %s", p[i].doj);
        printf("\nSalary = %.2f\n", p[i].salary);
    }

    return 0;
}
