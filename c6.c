#include <stdio.h>

/*daugiausiai skaitmenu turincio skaiciaus radimas*/

int main()
{
    double temp, digits = 0, maxDigits = 0, ats, n;

    printf("ivesti seka: ");

    for(;;){
               
        scanf("%lf", &temp);

        if(temp < 0){
            break;
        }

        n = temp;
        do{
            temp /= 10;
            ++digits;
        } while(temp != 0);

        if(digits > maxDigits){
            ats = n;
        }
    }
    printf("ats: %lf", ats);

    return 0;
}