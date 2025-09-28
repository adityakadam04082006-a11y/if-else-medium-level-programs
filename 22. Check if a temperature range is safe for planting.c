#include <stdio.h>
int main() {
    float minTemp, maxTemp;
    printf("Enter minimum and maximum temperatures: ");
    scanf("%f %f", &minTemp, &maxTemp);
    if (minTemp >= -5 && maxTemp <= 35) {
        if (minTemp >= 10 && maxTemp <= 25) {
            printf("Optimal range for planting\n");
        } else {
            printf("Safe but not optimal range for planting\n");
        }
    } else {
        printf("Not safe for planting\n");
    }
    return 0;
}