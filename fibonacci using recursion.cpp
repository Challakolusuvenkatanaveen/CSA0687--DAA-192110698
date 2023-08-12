#include<stdio.h>
int Fibonacci(int);
int main()
{
   int n, i , c=0;
   printf("enter the number: ");
   scanf("%d",&n);
   printf("Fibonacci series\n");
   for ( i = 1 ; i < n ; i++ )
   {
      printf("%d\n", Fibonacci(i));
      c++; 
   }
}
int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fibonacci(n-1) + Fibonacci(n-2) );
} 
