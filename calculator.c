#include<stdio.h>
int main() {
    char ch;
    int a,b,c;
    printf("+ Addition\n");
    printf("- Substraction\n");
    printf("* Multiplication\n");
    printf("// Division\n");

    printf("enter your choice");
    scanf("%c",&ch);

    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    switch(ch)
    {
        case '+':
        c=a+b;
        break;

        case '-':
        c=a-b;
        break;

        case '*':
        c=a*b;
        break;

        case '/':
        if(b==0)
        {
            c=0;
        }
        else
        {
            c=a/b;
        }
        break;
        default:
        printf("invailed choice\n");
    }
    printf("output is : %d",c);
    return 0;
}