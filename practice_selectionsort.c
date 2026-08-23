#include<stdio.h>
int main(){
    int arr[10]={7,11,3,34,13,99,45};
    int n=7;
    for(int i=0;i<n-1;i++){
        int min=i;
        int temp;
        for(int j=i+1;j<n;j++){
            
            if(arr[j]<arr[min]){
                min=j;
                
            }}
          temp=arr[i];
          arr[i]=arr[min];
          arr[min]=temp;

        }
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        return 0;
    }
