#include<stdio.h>

main()
{
   int n,f,l,sum;
   
   printf("Enter Any Number :");
   scanf("%d",&n);
   
   l=n%10;
   
   f=n;
   while(f>=10)
   {
   f/=10;
   }

   sum=f+l;

   printf("Total Sum : %d",sum);
}
















