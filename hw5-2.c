#include <stdio.h>

int main() {
    float a,b;
    scanf("%f",&a);
    if(a<=800){
    b=a*0.9;
    }
    else if(a>800&&a<=1500){
    b=(a*0.9)*0.9;

    }
    else{
    b= (a*0.9)*0.79;
    }
    printf("%.1f",b);
}
