#include <stdio.h>

int main() {
    int a;
    int b;
    double t;
    double k;
    double z;
    scanf("%d",&a);
    scanf("%d",&b);
    t=b*6-(a%12*30+b*0.5);
    if (t<0){
        t=360+t;
        if(t>180){
            t=360-t;
        }
    }
    if(t>180){
    t=360-t;
    }
   printf("%.3f",t);

}
