#include<stdio.h>
int main() {
    int a[100];
    int size;

    printf("Enter size of array \n");
    scanf("%d",&size);

    //Input array elements
    printf("Enter array elements \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    //Printing array elements
    for(int i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
}