#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
//extern double PI = 3.14159265359; 

double circumference(double radius){
    return 2 * M_PI * radius;
}
double area(double radius){
    return M_PI * pow(radius, 2);
}

int main(){
    printf("Program obliczajacy obwod oraz pole kola\n");
    printf("Wpisz promien: ");
    
    double radius;
    scanf("%lf", &radius);

    printf("Obwod jest rowny: %lf\n", circumference(radius)); 
    printf("Pole jest rowne: %lf\n", area(radius));

    return 0;
}