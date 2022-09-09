#include<stdio.h>
int main() {
    int a[100][100][100];
    int row;
    int col;
    int th;

    printf("Enter rows of array \n");
    scanf("%d",&row);
    printf("Enter columns of array \n");
    scanf("%d",&col);
    printf("Enter th axis of array \n");
    scanf("%d",&th);

    //Input array elements
    printf("Enter array elements \n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            for(int k=0; k<th; k++)
            {
                scanf("%d",&a[i][j][th]);
            }
        }
    }

    //Printing array elements
    printf("Your array \n");
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            for(int k=0; k<th; k++)
            {
                printf("%d",a[i][j]);
            }
        }
    }

}