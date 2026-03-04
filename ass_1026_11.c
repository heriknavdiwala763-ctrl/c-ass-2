#include<stdio.h>
struct metric
{
    int metre;
    float centimetre;
};
struct british
{
    int feet;
    float inches;
};
int main()
{
    struct metric m1;
    struct british b1;
    float total_inches;
    int result_feet;
    float result_inches;
    printf("Enter distance in metric system: ");
    printf("\nMetres: ");
    scanf("%d",&m1.metre);
    printf("Centimetres: ");
    scanf("%f",&m1.centimetre);
    printf("\nEnter distance in british system: ");
    printf("\nFeet: ");
    scanf("%d",&b1.feet);
    printf("Inches: ");
    scanf("%f",&b1.inches);
    total_inches=(m1.metre*39.37)+(m1.centimetre*0.3937);
    total_inches=total_inches+(b1.feet*12)+b1.inches;
    result_feet=total_inches/12;
    result_inches=total_inches-(result_feet*12);
    printf("\ntotal distance=%d feet %.2f inches",result_feet,result_inches);
    return 0;
}