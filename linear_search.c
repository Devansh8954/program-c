#include<stdio.h>
int main() {
    int a[100];
    int i;
    int size;
    int n;

    printf("Enter size of array \n");
    scanf("%d",&size);

    //Input array elements
    printf("Enter %d array elements \n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number to find \n");
    scanf("%d",&n);

    for(i=0; i<size; i++)
    {
        if(n == a[i])
        {
            printf("Found at index : %d ",i+1);
        }
    }
    if(i>size) {
        printf("Not found");
    }
}