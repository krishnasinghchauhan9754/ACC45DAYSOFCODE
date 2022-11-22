#include<stdio.h>
int swap(int *, int *);
int main(){
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
    return 0;
}
int swap(int *p, int *q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
}
