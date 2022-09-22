#include<stdio.h>
int main() {
    int a[100];
    int size;
    int n=0;
    int first=0,last=size-1;

    printf("Enter size of array \n");
    scanf("%d",&size);

    //Input array elements
    printf("Enter array elements \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number to find \n");
    scanf("%d",&n);

    while(first<=last)
    {
        int mid=(first+last)/2;
        if(a[mid] == n) {
            printf("Element found at %d",mid+1);
            break;
        }
        else if(a[mid]<n) {
            last= mid-1;
        }
        else {
            first = mid+1;
        }
    }
    if(first > last)
     printf("Not found! %d isn't present in array", n);
}
