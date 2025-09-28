#include <stdio.h>
int main() {
    float income;
    int creditScore;
    printf("Enter income and credit score: ");
    scanf("%f %d", &income, &creditScore);
    if (income >= 30000) {
        if (creditScore >= 700) {
            printf("Qualified for loan\n");
        } else {
            printf("Not qualified (low credit score)\n");
        }
    } else {
        printf("Not qualified (low income)\n");
    }
    return 0;
}