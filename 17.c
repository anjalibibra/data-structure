#include<stdio.h>

int main(){
    int arr1[5], arr2[5], arr3[10], i, j, temp;
    printf("Enter values of your 1st array: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter values of your 2nd array: ");
    for(i=0; i<5; i++){
        scanf("%d", &arr2[i]);
    }
    for(i=0; i<5; i++){
        for(j=i+1;j<5; j++){ 
        if(arr1[i]<arr1[j]){
            temp=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=temp;
        }
        }
    }
    for(i=0; i<5; i++){
        for(j=i+1;j<5; j++){ 
        if(arr2[i]<arr2[j]){
            temp=arr2[i];
            arr2[i]=arr2[j];
            arr2[j]=temp;
        }
        }
    }
    printf("\n1st array after being sorted is: ");
    for(i=0; i<5; i++){
        printf(" %d ", arr1[i]);
    }
    printf("\n2nd array after being sorted is: ");
    for(i=0; i<5; i++){
        printf(" %d ", arr2[i]);
    }
    for(i=0; i<5; i++)
        arr3[i]=arr1[i];
    for(i=0; i<5; i++)
        arr3[i+5]=arr2[i];
    for(i=0; i<10; i++){
        for(j=i+1;j<10; j++){ 
        if(arr3[i]<arr3[j]){
            temp=arr3[i];
            arr3[i]=arr3[j];
            arr3[j]=temp;
        }
        }
    }
    printf("\nArray after being merged and sorted: ");
    for(i=0; i<10; i++){
        printf(" %d ", arr3[i]);
    }
    return 0;
}