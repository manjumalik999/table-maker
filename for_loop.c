#include <stdio.h>

int main() {

    int num ;
    int i;
printf("enter a number: ");
scanf("%d", &num );

    // for(i = num ; i <= 10; i ++) {
    //     printf("2 x %d\n = %d" , num);
    // }
    for(i = 0; i <=10; i++){
        printf("%d X %d = %d\n", num , i, i*num);
    }

    return 0;
}
