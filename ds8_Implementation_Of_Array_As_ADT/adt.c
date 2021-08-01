#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct myArray //Abstract data type
{
    /* data */
    int total_size;
    int used_size;
    int *ptr; //Points to start of the array


};

void createArray(struct myArray *a,int tsize,int usize){
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr = (int *) malloc(tsize*sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr = (int *) malloc(tsize*sizeof(int));
}

void show(struct myArray *a){
    for(int i=0;i<a->used_size;i++){
        printf("%d\n", (a->ptr)[i]);
    }
}

void setVal(struct myArray *a){
    int n;
    for(int i=0;i<a->used_size;i++){
        printf("\nEnter the elements %d :",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}

int main()
{
    /* code */
    struct myArray marks; //Instance of structure myArray
    createArray(&marks,10,5);
    printf("\nWe are running setval now");
    setVal(&marks);
    printf("\nWe are running show now");
    show(&marks);
    return 0;
}
