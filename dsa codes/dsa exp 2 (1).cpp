// Online C compiler to run C program online
#include<stdio.h>
void lin_search(int arr[],int target,int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            count=count+1;}
            }
    if(count==1){
        printf("The number enterd is present(linear search)."); }
    else{
        printf("The number entered is not present(linear search).");}
}
int bin_search(int arr[],int target,int size){
    int start=0;
    int end=size-1;
    int mid=0;
    int midval=0;
    while(start<=end) {
        mid=(start+end)/2;
        midval=arr[mid];
        if(target==midval){
            return 1;}
        else if (target<midval){
            end=mid-1;}
        else{
            start=mid+1;}
    }
    return -1;
}
int main(){
    int target,size;
    printf("Enter the size of the set:",size);
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter the %d term of the list",i+1);
        scanf("%d",&arr[i]);}
    printf("Enter the target value");
    scanf("%d",&target);
    lin_search(arr,target,size);
    if(bin_search(arr,target,size)==1){
        printf("\nThe value entered is present (binary search)"); }
    else {
        printf("\nThe value entered is absent (binary search)");}
    return 0; 
}
