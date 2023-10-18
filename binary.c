#include<stdio.h>
void swap(int *a ,int *b){
    int temp;
    temp=*a;
    *a = *b;
    *b = temp;
}
  int selsort(int arr[],int size){
      for(int i=0;i<size -1;i++){
          for(int j = i+1;j < size;j++)
          if(arr[j]<arr[i]){
              swap(&arr[j],&arr[i]);
          }
      }
  }
int binarysearch(int arr[],int n, int item){
    int mid,low,high;
    low =0;
    high = n-1;
     while(low<= high) {
          mid = (low+high)/2;
       if(arr[mid]==item){
        return mid;
    }
      if(arr[mid]<item){
        low = mid +1;
        }
    else{
        high = mid -1;
    }
      
    }
    return -1;

}
void display(int arr[],int size){
      for(int i=0;i< size;i++){
        printf("arr[%d]= %d\n",i,arr[i]);
    } 
  }

int main()
{ int arr[] = {45,98,85,32,54,99,65,85};
int size = sizeof(arr)/sizeof(int);
selsort(arr,size);
display(arr,size);
int result = binarysearch(arr,size,99);
    if (result == -1){
        printf("element not found\n");
    }
    else{
        printf("element at index %d",result);
    }


    
    
return 0;
}