#include<stdio.h>
int main(){
    int n;
    printf("=== FACTORIAL CALCULATOR ===\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n < 0){
        printf("Factorial is not defined for negative numbers.");
        return 0;
    }
    int digits[10000];
    int size = 1;
    digits[0] = 1;
    int num = 2;
    while(num <= n){
        int carry = 0;
        int i = 0;
        while(i < size){
            int result = digits[i] * num + carry;
            digits[i] = result % 10;
            carry = result / 10;
            i++;
        }
        while(carry > 0){
            digits[size] = carry % 10;
            carry = carry / 10;
            size++;
        }
        num++;
    }
    printf("The factorial is: ");
    int i = size - 1;
    while(i >= 0){
        printf("%d", digits[i]);
        i--;
    }
    return 0;
}
