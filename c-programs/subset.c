// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int subsetsum(int set[],int n,int sum){
    if(sum==0){
    return 1;
    }
    if(n==0){
    return 0;
    }
    if(set[n-1]>sum){
        return subsetsum(set,n-1,sum);
    return subsetsum(set,n-1,sum) || subsetsum(set,n-1,sum-set[n-1]);
}



int main() {
    int n,s;
    int set[n];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("Enter element %d:",set[i]);
    scanf("%d",&set[i]);
    }
    if(subsetsum(set,n,s)){
        printf("the subset with sum %d exits",sum);
    }
    else{
        printf("Sum doesnt exits");
    }
    }
    
    return 0;
}