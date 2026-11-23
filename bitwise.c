
#include <stdio.h>
int main() {
    int a = 5, b = 3;
    printf("Bitwise AND: %d\n", a & b);
    printf("Bitwise OR: %d\n", a | b);
    printf("Bitwise XOR: %d\n", a ^ b);
    printf("Bitwise NOT: %d\n", ~a);
    printf("Left Shift: %d\n", a << 1);
    printf("Right Shift: %d\n", a >> 1);
    printf("logical AND: %d\n",a &&b);
    printf("logical AND: %d\n",a &&b);
    return 0;
}
/*since a=5 and b=3 i convert them into binary then i get
a=0101 and b=0011 then we perform different operators
like 1.bitwise AND 0101 && 0011 = 0001 = 1
2.bitwise OR 0101 || 0011 =0111 = 7
3.bitwise XOR 0101 ^ 0011 = 0110 = 6
4.bitwise NOT 0101 there is RIGHT SHIFT 5 >> 1 = 2 here you shift hence 5 becomes 0010=2
                            and LEFT SHIFT 5 << 1 = 10 here you shift to the left 1010=10 */
                      
/*The difference between bitwise and logical
 bitwise operators work with individual binary bits (0 and 1), while logical operators work with conditions (true and false)*/