#include <stdio.h>
int main(void){
    while(1){
        int male, female;
        scanf("%d %d", &male, &female);
        if ((male != 0) && (female != 0))
            printf("%d\n", male + female);
        else break;
    }
    return 0;
}