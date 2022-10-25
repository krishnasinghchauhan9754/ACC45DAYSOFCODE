#include<stdio.h>
int main() {
    char ch;
    printf("enter a char");
    scanf("%c",&ch);
    if(ch>='a' &&ch<='z')
    {
        ch=ch-32;
    }
    printf("%c",ch);
    return 0;
}