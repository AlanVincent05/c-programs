#include <stdio.h>

void printArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int n, int pos, int elem) {
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return n;
    }
    int i;
    for(i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = elem;
    return n + 1;
}

int deleteElement(int arr[], int n, int pos) {
    if(pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n;
    }
    int i;
    for(i = pos; i < n - 1; i++){
        arr[i] = arr[i + 1];
    }
    return n - 1;
}

int mergeArrays(int arr1[], int n1, int arr2[], int n2) {
    int i;
    for(i = 0; i < n2; i++){
        arr1[n1 + i] = arr2[i];
    }
    return n1 + n2;
}

int main() {
    int arr[100];
    int n, choice, pos, elem, n2, i;
    
    printf("Enter initial number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    do {
        printf("\nMenu:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Merge with another array\n");
        printf("4. Print the array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                printf("Enter position to insert (0-indexed): ");
                scanf("%d", &pos);
                printf("Enter element to insert: ");
                scanf("%d", &elem);
                n = insertElement(arr, n, pos, elem);
                printf("Array after insertion: ");
                printArray(arr, n);
                break;
            case 2:
                printf("Enter position to delete (0-indexed): ");
                scanf("%d", &pos);
                n = deleteElement(arr, n, pos);
                printf("Array after deletion: ");
                printArray(arr, n);
                break;
            case 3: {
                int arr2[100];
                printf("Enter number of elements in second array: ");
                scanf("%d", &n2);
                printf("Enter %d elements: ", n2);
                for(i = 0; i < n2; i++){
                    scanf("%d", &arr2[i]);
                }
                n = mergeArrays(arr, n, arr2, n2);
                printf("Array after merging: ");
                printArray(arr, n);
                break;
            }
            case 4:
                printf("Current array: ");
                printArray(arr, n);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
        
    } while(choice != 5);
    
    return 0;
}
