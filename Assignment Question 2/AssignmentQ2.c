/*
    write a Program to print a string using pointer.
*/
#include<stdio.h>
void acceptStr(char a[]);

int main(){
    char name[20];
    //accepting string
    acceptStr(name);
    //printing string
    char *ptr;
    ptr=name;
    printf("\nThe entered string is : %s",ptr);

}
void acceptStr(char a[]){
    printf("Enter a string: ");
    scanf("%s", a);
}
