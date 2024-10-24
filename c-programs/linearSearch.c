#include <stdio.h>

int linSrch(int arr[],int size,int elem){
    for (int i=0;i<size;i++){
        if(arr[i]==elem){
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array
    int target;

    printf("Enter the number to search: ");
    scanf("%d", &target);

    int result = linSrch(arr, size, target);

    if (result != -1) {
        printf("Number found at index %d\n", result);
    } else {
        printf("Number not found in the array\n");
    }

    return 0;
}