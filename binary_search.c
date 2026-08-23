#include<stdio.h>
int main(){
    int arr[10]={1,2,3,4,5};
    int n=5;
    int key;
    int found=-1;
    scanf("%d",&key);
    int low=0,high=n-1;
    while(low<=high){
        int mid =low+ (high-low)/2;
        if(arr[mid]==key){
            found= mid;
            break;

        }else if(arr[mid]<key){
            low=mid+1;
        }else if(arr[mid]>key){
            high=mid-1;
        }
    }if(found!=-1){
        printf("Element found at index %d ",found);
    }else{
        printf("Elemnent not found");
    }
return 0;
}