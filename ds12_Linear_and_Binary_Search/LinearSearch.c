#include<stdio.h>
#include<conio.h>


int linearSearch(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(element==arr[i]){
            return i;
        }
    }
    return -1;
}



int main()
{
    /* code */
    // Unsorted Array for Linear Search
    int arr[]={12,45,634,56,76,56};
    int element;
    int size=sizeof(arr)/sizeof(int);
    printf("\nEnter the elements to be searched:");
    scanf("%d",&element);
    int searchIndex=linearSearch(arr,size,element);
    printf("\n Element %d found at %d ",element,searchIndex);
    
    return 0;
}
