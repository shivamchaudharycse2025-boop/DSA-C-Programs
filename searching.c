#include<stdio.h>

int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;
    int found =-1;
    int key;
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found=i;
            break;
        }
    }
    if(found!=-1){
        printf("Element found at index %d ",found);

    }else{
        printf("Element not found");
    }
 return 0;
}