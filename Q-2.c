#include<stdio.h>

main()
{
   int n,count;
   
   printf("Enter Any Number :");
   scanf("%d",&n);
   
   while(n>0)
   {
   		n=n/10;
   		count++;
   }
   printf("Total number of digits : %d",count);
}
















