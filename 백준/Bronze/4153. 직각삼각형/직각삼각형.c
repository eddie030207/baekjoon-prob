#include <stdio.h>
#include <math.h>

int swap(int *n1, int *n2){
    if(*n1 > *n2){
        int temp = *n2;
        *n2 = *n1;
        *n1 = temp;
    }
}
int main(void){
    while (1)
    {
        int tri_len[3];
        for(int i = 0; i < 3; i++){
            scanf("%d", &tri_len[i]);
        }

        if(tri_len[0] == 0) break;
       
        swap(&tri_len[0], &tri_len[1]);
        swap(&tri_len[0], &tri_len[2]);
        swap(&tri_len[1], &tri_len[2]);

        double a_b_sq = pow(tri_len[0], 2) + pow(tri_len[1], 2);
        double c_sq = pow(tri_len[2], 2);

        if(a_b_sq == c_sq) printf("right\n");
        else printf("wrong\n");
            
    }
    return 0;
}