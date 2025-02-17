#include <stdio.h>

// Binary search function: returns an index of the element if found, else -1.
int binarySearch(int arr[], int low, int high, int x) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int n, x;
    
    // Input number of elements.
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input the sorted array elements.
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input the element to search for.
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    // Perform binary search.
    int index = binarySearch(arr, 0, n - 1, x);
    
    if (index == -1) {
        printf("Element not found.\n");
    } else {
        // Find the leftmost occurrence.
        int left = index;
        while (left > 0 && arr[left - 1] == x) {
            left--;
        }
        
        // Find the rightmost occurrence.
        int right = index;
        while (right < n - 1 && arr[right + 1] == x) {
            right++;
        }
        
        int count = right - left + 1;
        printf("Element %d found %d times at positions: ", x, count);
        
        // Print positions (1-indexed).
        for (int i = left; i <= right; i++) {
            printf("%d ", i + 1);
        }
        printf("\n");
    }
    
    return 0;
}
