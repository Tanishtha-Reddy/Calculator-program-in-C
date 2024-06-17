#include <stdio.h>

int main()
{

   char a;
   double x;
   double y;
   double z;

   printf("\nEnter an operator (+ - * /): ");
   scanf("%c", &a);

   printf("Enter number 1: ");
   scanf("%lf", &x);

   printf("Enter number 2: ");
   scanf("%lf", &y);

   switch(a){
      case '+':
         z = x + y;
         printf("\nresult: %lf", z);
         break;
      case '-':
         z = x - y;
         printf("\nresult: %lf", z);
         break;
      case '*':
         z = x * y;
         printf("\nresult: %lf", z);
         break;
      case '/':
         z = x / y;
         printf("\nresult: %lf", z);
         break;
      default:
         printf("%c is not valid", a);
   }

   return 0;
}