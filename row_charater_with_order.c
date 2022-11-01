#include<stdio.h>
int main() {
    int n,row,col;
    char ch='a';
    printf("enter the number of row to print");
    scanf("%d",&n);
    for(row=1; row<=n; row++,ch++){
        ch='a';
        for(col=1;col<=row;col++,ch++)
    {
        printf("%c",ch);
    }
    printf("\n");
}
return 0;
} 