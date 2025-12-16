#include<stdio.h>

int main(){
    int star = 5;

    for (int i = 1; i <= star; i++)
    {
        for (int j = 1; j <= star - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
