#include <stdio.h>

int main(){

int a, b, c; /* define three integers variables */
a=2;
b=4;
c=a + b;    /* Give variable c the sum of variables a and b */
 printf("Sum of the numbers %d and %d = %d\n",a, b, c);   /* print result */
 c=a * b;   /* Give variable c the mul of variables a and b */
 printf("Mul of the numbers %d and %d = %d\n",a, b, c);   /* print result */
 c = b - a; /* Give variable c the sub of variables a and b */
 printf("Sub of the numbers %d and %d = %d\n",a, b, c);   /* print result */
 c = b / a; /* Give variable c the div of variables a and b */
 printf("Div of the numbers %d and %d = %d\n",a, b, c);   /* print result */

return 0;
}
