/*105) Write a C Program to delete given element from Array*/

#include <stdio.h>

int main() {
    int arr[100], n, key, found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);

    printf("Enter element to delete: ");
    scanf("%d", &key);

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            // shift left from i
            for(int j=i;j<n-1;j++) arr[j] = arr[j+1];
            n--;
            found = 1;
            break; // remove only first occurrence
        }
    }

    if(!found) printf("Element not found.\n");
    else {
        printf("Array after deletion: ");
        for(int i=0;i<n;i++) printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}
