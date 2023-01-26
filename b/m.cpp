#include<stdio.h>
struct Str
{
   int n1;
   int n2;
}s;
int add(int x,int y)
{
   int sum = x+y;
   return sum;
}
void main()
{
   s.n1=10;
   s.n2=15;
   int r = add(s.n1,s.n2);
   printf("\nThe sum is %d\n",r);
}