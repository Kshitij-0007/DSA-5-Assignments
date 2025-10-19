/* 
   Write a Program to swap elements between two array using pointers.

*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swapArray(int a[],int b[],int n);
int main()
{
    int n;
    printf("Enter the number of elements in both arrays:");
    scanf("%d",&n);
    int a[n],b[n];
    printf("\nEnter %d elements in array 1:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter %d elements in array 2:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    printf("\n-----Arrays Before Swapping-----\n");
    printf("Array 1:\n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("]\n");
    printf("Array 2:\n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
    printf("]\n");
    //Swapping the arrays using pointers
    swapArray(a,b,n);

    printf("-----After Swapping Arrays-----\n");
    printf("Array 1:\n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
    printf("]\n");
    printf("Array 2:\n");
    printf("[");
    for(int i=0;i<n;i++){
        printf("%d",b[i]);
    }
    printf("]\n");
}
void swapArray(int a[],int b[],int n){
    int *p;
    int *q;
    p=a;
    q=b;
    for(int i=0;i<n;i++){
        int temp=*(p +i);
        *(p +i)=*(q +i);
        *(q +i)=temp;
    }
}