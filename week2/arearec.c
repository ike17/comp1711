#include <stdio.h>
#include <math.h>
#define pi 3.14156

int main(){
    //Formula for area of rectangle is length * width
    float length , width, area;

    printf("Length of rectangle: ");
    scanf("%f", &length);
    printf("Width of rectangle: ");
    scanf("%f", &width);

    area = length * width;
    printf("area of retangle is %f cm^2\n", area);

    return 0;
}