#include <stdio.h>
int main(){
    int sum=0;
    printf("===This is to calculate the sum of all numbers in array===\n");
    int size;
    printf("Enter the size of your array:");
    scanf("%d",&size);
    int array[size];
    printf("Enter the numberin your array 1 by 1:\n");
    for (int i=0 ;i<size;i++){
        printf("The %d index number is:",i);
        scanf("%d",&array[i]);
        sum +=array[i];
    }
    printf("");
    printf("● Sum of you numbers is:%d",sum);
    return 0;
}