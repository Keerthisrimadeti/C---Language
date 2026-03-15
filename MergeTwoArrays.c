#include <stdio.h>

int main() {
    int n=5,i;
    int result=1;

    for(i=1;i<=n;i++){
        result=result*i;
    }

    printf("Example program: MergeTwoArrays\n");
    printf("Result value: %d",result);

    return 0;
}