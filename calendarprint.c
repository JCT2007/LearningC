#include <stdio.h>

int main(void) {
    int i, j, days, sdow, totaldays; //sdow = starting day of week

    printf("Enter number of days in month:");
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat):");
    scanf("%d", &sdow);
    totaldays = days + sdow;

    for (i = 0, j = 1; i < totaldays; i++) {
        if (i < sdow) {
            printf("    ");
        } else {
            printf("%4d", j);
            j++;
        }
        if (i % 7 == 0) {
            printf("\n");
        }
        
    }
    printf("\n");

    return 0;
}