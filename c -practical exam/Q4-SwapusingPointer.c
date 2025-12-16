#include<stdio.h>

void swap(int *a,int *b){

    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){

    int A,B;

    printf("Enter the First Number : ");
    scanf("%d",&A);

    printf("Enter the Second Number : ");
    scanf("%d",&B);


    swap(&A,&B);

    printf("After Swaping\n");
    printf("A = %d , B = %d",A,B);
    
    return 0;
}