#include<stdio.h>
int main()
{ int choice;
  printf("Enter your choice:");
  scanf("%d", &choice);
  switch(choice)
{
case 1:
printf("Food item - Pasta\nPrice - 120");
break;

case 2:
printf("Food item - Burger\nPrice-100");
break;

case 3:
printf("Food item - Pizza\nPrice - 130");
break;

case4:
printf("Food item - Pastry\nPrice - 150");
break;

default:
printf("Itmes are not available as per your choices");
      return 0;

}

}
