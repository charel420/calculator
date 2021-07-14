#include <stdio.h>
#include <stdlib.h>

int main()
{

  double num1;
  double num2;
  char operator;
  double result;

  printf("Enter first number: ");
  scanf("%d", &num1);
  printf("Enter operator: ");
  scanf(" %c", &operator);

  if(operator != '+' && operator != '-' && operator != '/' && operator != '*')
  {
    printf("Wrong operator!");
    return 0;
  }

  printf("Enter second number: ");
  scanf("%f", &num2);

  if(operator == '+')
  {
    result = num1 + num2;
    printf("Result: %f", result);
  }
  else if(operator == '-')
  {
    result = num1 - num2;
    printf("Result: %f", result);
  }
  else if(operator == '*')
  {
    result = num1 * num2;
    printf("Result: %f", result);
  }
  else if(operator == '/')
  {
    result = num1 / num2;
    printf("Result: %f", result);
  }

  return 0;
}
