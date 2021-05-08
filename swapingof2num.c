#include<stdio.h>
int main()
{ 
  int a,b;
  printf("Enter the first integer: );
  scanf("%d" , &a);
  printf("Enter the second integer: );
  scanf("%d" , &b);

  a=a+b;
  b=a-b;
  a=a-b;

  printf("After Swapping : \nfirst number=%d\nsecond number=%d" , a,b);
  return 0;
}
