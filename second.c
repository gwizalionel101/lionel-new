#include <stdio.h>
int main(){
    int me[5] = {5, 3, 4, 2, 1};
    int largest=me[0];
    int s_largest;
    for(int i = 1; i < 5; i++){
        if(me[i] > largest){
            s_largest = largest;
            largest = me[i];
        }
        else if(me[i] < largest && me[i] > s_largest){
            s_largest = me[i];       
        }
    }
    printf("The second largest number is: %d", s_largest);
    return 0;
}
