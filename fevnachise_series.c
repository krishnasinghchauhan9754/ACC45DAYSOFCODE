#include<stdio.h>
int main(){
    int i=1,j=1,n,k=1,t=0;
    printf("enter the nth term");
    scanf("%d",&n);
    printf("the given series is \n%d \n",i);
    for(k=1;k<=n;k++)
    {
        t=j;
        j=i+j;
        i=t;
        printf("%d\n",i);
    }
}