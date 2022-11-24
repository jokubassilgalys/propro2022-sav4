#include <stdio.h>
#include <stdlib.h>

/*didziausio bendrojo daliklio funkcija ir maziausio bendro kartotinio funkcija */

int main()
{
    int a, b, c, dbd, mbk;

    printf("ivesti naturaliuosius skaicius a, b ir c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > 0 && b > 0 && c > 0){

        int min;
        if(a < b){
            if(a < c) min = a;
            else min = c;
        }
        else{
            if(b < c) min = b;
            else min = c;
        }


        for(dbd = min; dbd >= 1; --dbd){
            if(a % dbd == 0 && b % dbd == 0 && c % dbd == 0){
                break;
            }
        }

        for(mbk = 1; mbk <= a * b * c; ++mbk){
            if(mbk % a == 0 && mbk % b == 0 && mbk % c == 0){
                break;
            }
        }

        printf("DBD: %d\nMBK: %d", dbd, mbk);
    }
    else {
        printf("neteisinga ivestis");
    }

    return 0;
}