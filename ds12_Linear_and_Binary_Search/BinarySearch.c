#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[],int size,int element){
    int low=0,mid,high=size-1;
    // Keep Searching until low<=high
    while (low<=high)
    {
        /* code */
        mid=(low+high)/2;
        if(arr[mid]==element){
            return mid;
        }
        if(arr[mid]<element){
            low=mid+1; //Because there is no element on mid thats why we increment the index
        }
        else{
            high=mid-1;
        }
    }
    
    return -1;
    
}


int main()
{
    /* code */
    int element;
    // Sorted Array for Linear Search
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int size=sizeof(arr)/sizeof(int);
    printf("\nEnter the element to be searched: ");
    scanf("%d",&element);
    int searchedIndex=binarySearch(arr,size,element);
    printf("\nElement %d found at %d",element,searchedIndex);
    return 0;
}
