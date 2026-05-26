#include <stdio.h>
#include <math.h>

int main(){
    float x_alvo, y_alvo, r_alvo, x_tiro, y_tiro, r_tiro;

    scanf("%f %f %f\n", &x_alvo, &y_alvo, &r_alvo);
    scanf("%f %f %f\n", &x_tiro, &y_tiro, &r_tiro);

    if(sqrt(pow(x_alvo-x_tiro, 2)+pow(y_alvo-y_tiro, 2)) <= r_alvo + r_tiro)
        printf("ACERTOU");
    else
        printf("ERROU");

    return 0;
}