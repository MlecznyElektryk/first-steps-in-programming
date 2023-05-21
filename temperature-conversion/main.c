#include <stdio.h>
#include <math.h>
#include <ctype.h>

double cToF(double deg){
    return ((deg * 9 / 5) + 32);
}

double fToC(double deg){
    return ((deg - 32) * 5 / 9);
}

int main(){

    printf("Wybierz rodzaj konwersji wciskając odpowiedni przyciski: \n");
    printf("A - konwersja ze stopni C na stopnie F\n");
    printf("B - konwersja ze stopni F na stopie C");

    double degrees;
    char sign;

    scanf("%c", &sign);
    sign = toupper(sign);

    switch(sign){
        case 'A':
        printf("Wybrano konwersje ze stopni C na stopnie F\n");
        printf("Ilosc stopni: \n");
        scanf("%lf", &degrees);
        printf("\n%lf stopni C jest w przyblizeniu rowne %lf stopni F", degrees, cToF(degrees));
        break;

        case 'B':
         printf("Wybrano konwersje ze stopni F na stopnie C\n");
        printf("Ilosc stopni: ");
        scanf("%lf", &degrees);
        printf("\n%lf stopni F jest w przyblizeniu rowne %lf stopni C", degrees, fToC(degrees));
        break;
        
        default: 
        printf("Nieznany symbol");
    }
    return 0;
}