#include<stdio.h>
int main() {
    int a[100];
    int size;
    int n;

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

    int first=0,last=size-1;

    while(first<=last)
    {
        int mid=(first+last)/2;
        if(a[mid] == n) {
            printf("Element found at %d",mid+1);
            return 0;
        }
        else if(a[mid]<n) {
            first= mid+1;
        }
        else {
            last = mid-1;
        }
    }
     printf("Not found! %d isn't present in array", n);
     return 0;
}
