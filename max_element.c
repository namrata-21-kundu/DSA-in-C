#include <stdio.h>
int main()
{
    int n, i, max;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    max=arr[0];
    for (i=0;i<n;i++){
        if (arr[i]> arr[max]){
            max=i;
        }
    }
    printf("Maximum element in array is %d", arr[max]);
    return 0;
}