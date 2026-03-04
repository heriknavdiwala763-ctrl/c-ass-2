#include <stdio.h>

int main()
{
    FILE *fp;
    int id;
    char name[20];
    float salary;

    fp = fopen("mixed.txt", "w");

    printf("Enter id, name, salary: ");
    scanf("%d %s %f", &id, name, &salary);

    fprintf(fp, "%d %s %.2f", id, name, salary);
    fclose(fp);

    printf("Data stored successfully");
    return 0;
}