#include<stdio.h>
#define SIZE 5
int main() {
    int arr[SIZE],i,ec=0, oc=0;
    printf("enter %d number in the array\n", SIZE);
    for(i=0;i<=SIZE-1;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            ec+=arr[i];
        }
        else{
            oc+=arr[i];
        }
    }

    printf("sum of the even element of the array is %d\n",ec);
    printf("sum of odd element of the array is %d\n",oc);
    return 0;
    
}