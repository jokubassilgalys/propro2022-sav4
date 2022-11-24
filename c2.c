#include <stdio.h>

/*spausdinami teigiami sveikieji skaiciai (a, b] kurie dalijasi is c su liekana 1*/

int main()
{
    int a, b, c, start, ats;

    printf("ivesti sveikuosius skaicius a, b ir c: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a <= 0){
        a = 1;
    }

    for(start = (a % c == 0) ? a/c : a/c + 1; start <= (b-1) / c; ++start){
        ats = c * start + 1;
        printf("%d ", ats);
    }

    return 0;
}