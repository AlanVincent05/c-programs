#include <stdio.h>

void linearSearch(int arr[], int n, int search) {
    int count = 0;
    printf("Element %d found at positions: ", search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            // Print position as i+1 (not the array index)
            printf("%d ", i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf("Not found");
    }
    printf("\nTotal Occurrences: %d\n", count);
}

int main() {
    int n, search;
    
    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];  // Using a variable length array (C99 feature)
    
    // Input array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to search
    printf("Enter the element to search: ");
    scanf("%d", &search);
    
    // Call the linear search function
    linearSearch(arr, n, search);
    
    return 0;
}
