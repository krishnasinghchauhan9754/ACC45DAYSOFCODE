#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    printf("factors of the number are:\n");
    for (i=1;i<=n/2;i++){
        if(n%i==0)
        {
            printf("%d\n",i);
        }
    }
}