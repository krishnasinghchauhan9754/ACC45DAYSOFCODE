#include<stdio.h>

int main()
{
    int h, b;
    float area;
    printf("Enter the height of the Triangle: ");
    scanf("%d", &h);
    printf("Enter the base of the Triangle: ");
    scanf("%d", &b);
    area = (h*b)/(float)2;
    printf("The area of the triangle is: %f", area);
    return 0;
}