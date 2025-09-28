#include <stdio.h>
int main() {
    int age, weight;
    char health;
    printf("Enter age, weight (kg), and health (Y/N): ");
    scanf("%d %d %c", &age, &weight, &health);
    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            if (health == 'Y' || health == 'y') {
                printf("Eligible to donate blood\n");
            } else {
                printf("Not eligible (health issue)\n");
            }
        } else {
            printf("Not eligible (weight < 50kg)\n");
        }
    } else {
        printf("Not eligible (age out of range)\n");
    }
    return 0;
}