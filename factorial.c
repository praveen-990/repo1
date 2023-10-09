#include<stdio.h>
void main()
{
  int nfact=1;
  printf("Enter a number : ");
  scanf("%d",&n);
  if(n==0 || n==1)
    printf("The factorial of the given number %d is 1",n)
  else
  {
    for(int i=1;i<=n;i++)
      fact=fact*i;
    printf("The factorial of the given number %d is %d",n,fact);
  }
}
