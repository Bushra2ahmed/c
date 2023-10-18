#include<stdio.h>
#define MAX 10
int main()
{
    int a[MAX];
    int i,j,n;
    
    printf("enter array size \n ");
    scanf("%d",&n);
    
    if(n>10){
        printf("size of array must be less than 10\n");
       
    }
    
    else{ 
        printf("enter array element\n");
        for(i=0;i<=n;i++){
        scanf("%d",&a[i]);
    }
          for(i=0;i<=n;i++){
        printf("a[%d]= %d\n",i,a[i]);
    }  


    }

      
    
    
return 0;
}