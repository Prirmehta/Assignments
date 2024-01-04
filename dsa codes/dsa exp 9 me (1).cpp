#include<stdio.h>
#include <stdbool.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int printArr(int arr[], int n){
	printf("[");
	for(int i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("]\n");
}
void bubbleSort(int arr[],int n){
	int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}
int main()
{
	int arr[]={4, 2, 7, 5, 9, 11, 3};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	bubbleSort(arr, n);
	
	printf("Array: ");
	printArr(arr, n);
	printf("Array length = %d\n\n", n);
	return 0;
}
