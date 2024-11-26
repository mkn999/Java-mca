// Online C compiler to run C program online
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
// a [10,2,1-,7,5];
int partition(int arr[],int low,int high){
    int pivot = arr[high];
    int i = low; //the index of element to swap
    
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pivot){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[high]);
    return i;
}
void printarr(int arr[],int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print the element at index i
    }
}
void quicksort(int arr[],int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        
        quicksort(arr,low,pi-1); //left
        
        quicksort(arr,pi+1,high); //right
    }
}
int main() {
    int index;
    int arr[] = {10,2,5,6,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}