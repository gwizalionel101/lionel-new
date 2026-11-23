#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int array[size];
    printf("===ENTER THE ARRAY===\n");
    for(int i=0;i<size;i++){
        printf("The number of %d index is:",i);
        scanf("%d",&array[i]);
    }
    int c_number;
    int num=0;
    printf("Enter the number to check:");
    scanf("%d",&c_number);
    for(int i=0;i<size;i++){
        if(c_number == array[i]){
            num++;
        }
    }
    if(num > 0){
        printf("The number exists: %d times",num);
    }
    else{
        printf("Number not found");
    }
    return 0;
}