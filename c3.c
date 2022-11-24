#include <stdio.h>

/*fibonacio seka*/

int main()
{
    int a, b, c, fc;

    printf("ivesti neneigiamus skaicius a, b ir c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a >= 0 && b >= 0 && c >= 0){

        for(int i = 2; i < c; ++i){
            fc = a + b;
            a = b;
            b = fc;
        }
        printf("f%d = %d", c, fc);
    }
    else {
        printf("neteisinga ivestis");
    }

    return 0;
}