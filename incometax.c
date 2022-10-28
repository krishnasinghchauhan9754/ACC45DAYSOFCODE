#include<stdio.h>
int main() {
    float m,a,i;

    printf("Enter monthly salary");
    scanf("%f",&m);
    a=12*m;
    i=a/3;
    printf("IT is %f",i);
    return 0;
}