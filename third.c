#include <stdio.h>
int main(){
  int value;
  printf("This is going to print the multiplication table of number you want to the decired value\n");
  printf("Do you want to continue\n1.True\n2.False\n");
  scanf("%d",&value);
  if(value == 1){
    int me;
    int num;
    int multiplier;
    printf("Enter the number you want to be printed:");
    scanf("%d",&multiplier);
    printf("Enter the limited number:");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
      me=multiplier*i;
      printf("%d * %d = %d\n",multiplier,i,me);
    }
  }
    else if(value == 2){
      printf("Thank you for using our multiplication table, Goodbye!");
      return 0;
    }
    else{
      printf("Invalid choice");
    }
  return 0;
}
