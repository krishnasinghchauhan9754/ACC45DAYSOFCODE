#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i,ec=0,oc=0;
    printf("enter 4 element in array\n");
    for(i=0;i<SIZE-1;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("total number of even values is %d\n",ec);
    printf("total number of odd values is %d",oc);
}