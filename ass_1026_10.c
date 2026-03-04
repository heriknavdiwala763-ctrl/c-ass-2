#include<stdio.h>
#define SIZE 3
void addvectors(int v1[], int v2[], int result[]) {
    for(int i = 0; i < SIZE; i++) {
        result[i] = v1[i] + v2[i];
    }
}
int main()
{
    int vector1[SIZE], vector2[SIZE], sum[SIZE];
    printf("Enter elements of first vector:\n");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &vector1[i]);
    }
    printf("Enter elements of second vector:\n");
    for(int i = 0; i < SIZE; i++) {
        scanf("%d", &vector2[i]);
    }
    addvectors(vector1, vector2, sum);
    printf("adding of two vectors:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", sum[i]);
    }
    return 0;
}