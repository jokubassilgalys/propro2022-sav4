#include <stdio.h>
#include <math.h>

/*kvadratines lygties sprendimo funkcija*/

int main()
{
    int a, b, c, d;
    double ats1, ats2;

    printf("ivesti sveikuosius skaicius a, b ir c: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - (4 * a * c);

    if(d >= 0){
        if(d > 0){
            ats1 = (-b + sqrt(d))/ (2 * a);
            ats2 = (-b - sqrt(d))/ (2 * a);
            printf("atskymai: %0.2f ir %0.2f", ats1, ats2);
        }
        else {
            double n = 2 * a;
            ats1 = -b / n;
            printf("atsakymas: %0.2f", ats1);
        }
    }
    else printf("atsakymo nera");


    return 0;
}