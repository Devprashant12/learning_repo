#include<stdio.h>
#define A (arr[i]>arr[i])
#define B (arr[j]>arr[i])
int main(){
    
    int arr[10],i = 0,j = 0;
    int len = (sizeof(arr[10]));
    char choice;
    
    printf("Enter number:");
    for(int k=0;k<len;k++)
    {
        scanf("%d",&arr[k]);
    }
   
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
           
            if(arr[i]>arr[j]){
                
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int c=0;c<len;c++)
    {
        printf("Sorted array according to order: %d\n",arr[c]);
    }
    return 0;
}

