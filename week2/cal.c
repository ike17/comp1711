#include <stdio.h>
#include <math.h>
#define pi 3.14156

int main(){
    float radii , area;
    printf("Radius of circle: ");
    scanf("%f", &radii);
    area = pi * pow(radii , 2);
    printf("area of circle is %f cm^2\n", area);
    return 0;
}