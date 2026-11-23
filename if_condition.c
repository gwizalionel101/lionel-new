
#include <stdio.h>
int main() {
    int v;
    int m = 16;
    printf("Enter the value of v: ");
    scanf("%d", &v);
    int k=(v >= m) ? printf("You are eligible to have an ID")
             : printf("You are not eligible to have an ID");
    printf("%c",k);
    int a, b, c, x;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);
    x = (a > b) ? a : (b - c);
    printf("The result is: %d", x);
    return 0;
}