#include <stdio.h>

/*ivesties skaiciu aritmetine suma, vidurkis, minimumas ir maksimumas*/

int main()
{
    int n;
    double temp, sum = 0, avg, min, max;

    printf("ivesti skaiciu n: ");
    scanf("%d", &n);

    printf("ivesti seka: ");
    
    if(n > 0){
        scanf("%lf", &temp);
        min = temp; max = temp; sum += temp;
    
        for(int i = 1; i < n; ++i){
            scanf("%lf", &temp);

            if(temp < min){
                min = temp;
            }
            else if(temp > max){
                max = temp;
            }
            sum += temp;
        }

        avg = sum / n;
        printf("suma: %0.2f, vidurkis: %0.2f, minimumas: %0.2f, maximumas: %0.2f", sum, avg, min, max);    
    }
    

    return 0;
}