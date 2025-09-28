#include <stdio.h>
int main() {
    int age;
    float purchase;
    printf("Enter age and purchase amount: ");
    scanf("%d %f", &age, &purchase);
    if (age >= 60 || purchase >= 1000) {
        if (age >= 60 && purchase >= 1000) {
            printf("Eligible for 20% discount\n");
        } else {
            printf("Eligible for 10% discount\n");
        }
    } else {
        printf("Not eligible for discount\n");
    }
    return 0;
}