#include <stdio.h>

int swap(int *x, int *y) {

int t=*y; 
*y = *x;
*x=t;

}

int main() {

int num1 = 0;

int num2= 0;

num1 = printf("Enter first number: ");

scanf("%d", &num1); 
num2 = printf("Enter second number: ");

scanf("%d", &num2);

printf("Before swapping: num1=%d, num2=%d\n", num1, num2);
swap(&num1, &num2);
printf("After swapping: num1=%d, num2=%d\n", num1, num2);

return 0;
}
