#include <stdio.h>

#define PI 3.1415f

int main(void) {
    float radius = 0;
    float volume;

    printf("What is the radius of your sphere?\n");
    scanf("%f", &radius);
    volume = (4.0f/3.0f) * PI * radius * radius * radius;
    printf("The volume of your sphere is: %.4f\n", volume);

    return 0;
}