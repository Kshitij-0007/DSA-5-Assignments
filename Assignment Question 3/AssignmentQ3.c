/*
   write a Program to read  array elements and print with addresses.

*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    int *ptr;
    ptr=a;
    int i;
    for(i=0;i<n;i++){
        printf("\nEnter the %d Element:",i+1);
        scanf("%d",(ptr+i));
    }
    printf("\n-----Displaying the array elements with their locations-----");
    for(i=0;i<n;i++){
        printf("\nThe element at %d position is :%d",i+1,*(ptr+i));
        printf("\nThe memory address of element is :");
        printf("%p",(void*)(ptr+i));
    }
}
