#include <stdio.h>
int main() {
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp < 0) {
        printf("Freezing\n");
    } else if (temp <= 25) {
        if (temp <= 10) {
            printf("Cold\n");
        } else {
            printf("Cool\n");
        }
    } else {
        printf("Hot\n");
    }
    return 0;
}