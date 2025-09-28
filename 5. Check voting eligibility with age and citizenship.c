#include <stdio.h>
int main() {
    int age;
    char citizen;
    printf("Enter age and citizenship (Y/N): ");
    scanf("%d %c", &age, &citizen);
    if (age >= 18) {
        if (citizen == 'Y' || citizen == 'y') {
            printf("Eligible to vote\n");
        } else {
            printf("Not eligible (not a citizen)\n");
        }
    } else {
        printf("Not eligible (under 18)\n");
    }
    return 0;
}