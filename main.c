#include <stdio.h>
#include <math.h>

double u( double x, double y){
    if ((x/pow(y, 2))<1){
        return fmax(cos(pow(x, 3)-sqrt(y)), cbrt((x*pow(y, 2))));
    }
    else{
        log(pow(y, 2)-x);
    }
}

int main(){
    double proizv = 1;
    for(double x=1;x<=2;x+=0.3){
        for(double y=2;y<=2.5;y+=0.5){
            double uzn = u(x,y);
            printf("x=%f, y=%f, u(x,y)=%f\n", x,y,uzn);
            proizv=proizv*uzn;
        }
    }
    printf("Произведение всех значений равно: %f\n", proizv);
    return 0;
}