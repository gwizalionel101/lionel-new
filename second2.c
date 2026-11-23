#include <stdio.h>
int main() {
    int size;
    printf("Enter the size you want: ");
    scanf("%d", &size);
    if (size <= 2){
      printf("Enter more numbers greater than 2");
      return 0;
    }
    int me[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &me[i]);
    }
    int largest = me[0];
    int s_largest = me[1];

    if (s_largest > largest) {
        int temp = largest;
        largest = s_largest;
        s_largest = temp;
    }
    for (int i = 2; i < size; i++) {
        if (me[i] > largest) {
            s_largest = largest;
            largest = me[i];
        }
        else if (me[i] > s_largest && me[i] != largest) {
            s_largest = me[i];
        }
    }
    printf("The largest number is: %d\n", largest);
    printf("The second largest number is: %d\n", s_largest);
    return 0;
}
