#include<stdio.h>
int main() {
    int a[100][100];
    int row;
    int col;

    printf("Enter rows of array \n");
    scanf("%d",&row);
    printf("Enter columns of array \n");
    scanf("%d",&col);

    //Input array elements
    printf("Enter array elements \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    //Printing array elements
    printf("Your array \n");
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d",a[i][j]);
        }
    }
}