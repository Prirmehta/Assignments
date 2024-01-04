#include <stdio.h>

int main() {

int num1= 0;

int num2= 0;

int temp = 0;

num1= printf("Enter first number: ");

scanf("%d", &num1);

num2= printf("Enter second number: ");

scanf("%d", &num2); 
printf("Before swapping: num1=%d, num2=%d\n", num1, num2);

temp = num2;

num2 = num1;

num1 = temp;

printf("After swapping: num1=%d, num2=%d\n", num1, num2);

return 0;
}
