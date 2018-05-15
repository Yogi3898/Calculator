#include<stdio.h>

int main()
{
   int a, b, c,ch;

   printf("1.ADD\n2.Substract\n ");
   printf("\nEnter your choice\n");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
        printf("\nEnter the values of a&b");
        scanf("%d%d",&a,&b);
        c = a+b;
        printf("Sum of a&b = %d",c);
        break;
    case 2:
        printf("\nEnter the values of a&b");
        scanf("%d%d",&a,&b);
        c = a-b;
        printf("Diffrence of a&b = %d",c);
        break;
    default:
        printf("\nenter the correct choice");
        break;
   }

   return 0;
}
