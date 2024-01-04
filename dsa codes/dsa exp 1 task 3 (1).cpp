#include <stdio.h>

int increment (int *arr, int size, int d) { 
 for(int i; i < size; i++) {

arr[i] += d;
}
}

int main() { 

int arr[] ={1,2,3,4,5};

int size =sizeof(arr)/sizeof(arr[0]);

increment (arr, size, 9);

for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
}
printf("\n");

return 0;
}
