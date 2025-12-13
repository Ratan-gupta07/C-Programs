/*104) Write a C Program to delete element at end of Array.*/

#include <stdio.h>

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);

    if(n <= 0) {
        printf("Array is empty.\n");
    } else {
        n--; // remove last element
        printf("After deleting last element: ");
        for(int i=0;i<n;i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
