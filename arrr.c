#include<stdio.h>
#include<stdlib.h>
struct array{
    int totl_size;
    int use_size;
    int *ptr;
    };
void arr( struct array * a ,int tsize,int usize){
    (*a).totl_size = tsize;
    (*a).use_size = usize;
    (*a).ptr = (int *)malloc(tsize * sizeof(int));

}
void show( struct array * a ){
    for(int i =0;i < (*a).use_size;i++){
        printf("%d\n",(*a).ptr[i]);
    }
    
}
void set( struct array * a ){
    int n;
    for(int i =0;i < (*a).use_size;i++){
        printf("enter value\n");
        scanf("%d",&n);
        (*a).ptr[i]= n;
    }
    
}
int main()
{
    struct array marks;
    arr(&marks,20,1);
    printf("running set function \n");
    set(&marks);
    printf("running show function \n");
    show(&marks);
return 0;
}