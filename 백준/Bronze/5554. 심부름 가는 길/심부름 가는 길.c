#include <stdio.h>

int main(void){
    int s1, s2, s3, s4, sum;
    scanf("%d %d %d %d", &s1, &s2, &s3, &s4);
    sum = s1 + s2 + s3 + s4;
    printf("%d\n", sum / 60);
    printf("%d", sum % 60);
    return 0;
}