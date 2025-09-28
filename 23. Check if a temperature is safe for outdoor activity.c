#include <stdio.h>
int main() {
    float temp;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp);
    if (temp >= -10 && temp <= 40) {
        if (temp >= 0 && temp <= 30) {
            printf("Safe for outdoor activity\n");
        } else {
            printf("Caution advised\n");
        }
    } else {
        printf("Not safe for outdoor activity\n");
    }
    return 0;
}