#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter values of three numbers:");
   scanf("%d%d%d",&a,&b,&c);

        // logic-1
   if (a>=b)
   {
      if (a>=c)
      {
        printf("%d is greater.",a);
      }
      else
      {
         printf("%d is greater.",c);
      }
       
   }
   else 
   {
       if (b>=c)
       {
           printf("%d is greater.",b);
       }
       else
       {
           printf("%d is greater.",c);
       }
       
   }