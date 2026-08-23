#include<stdio.h>
int main(){
    int arr[10]={7,99,23,11,2,56,52};
    int n=7;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            int temp;
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}