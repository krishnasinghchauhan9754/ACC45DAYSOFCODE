#include<stdio.h>
void main() {

  unsigned long kb;
  unsigned long mb;

	printf(" Program to convert Kilobyte to Megabyte :  ");

	printf("\n\n Enter Length in Kilobyte  : ");
	scanf("%lu", &kb);
    
    mb = (kb/1024);
    
    printf("\n\n %lu Kb  =  %lu Mb  \n",kb,mb);

}
