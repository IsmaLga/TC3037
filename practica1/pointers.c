#include <stdio.h>

int main(){
    int a[5] = {1,2, 3, 4, 5};
    int *pa;
    pa = a;
    *pa = 27;
    pa[2] = 45;
    *(pa + 3) = 200;
    for(int i = 0; i<sizeof(a)/sizeof(a[0]);i++){
        printf("a[%d] = %d \n", i, a[i]);
    } 
    printf("\n");
    return 0;
}