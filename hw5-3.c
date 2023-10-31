#include <stdio.h>

int main() {
    int a;
    int b;
    double t;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a<=60){
        t=a*b;
    }
    else if (a>=61&&a<=120){
        t=(a-60)*(b*1.33)+60*b;
    }
    else if(a>121){
        t=(a-120)*(b*1.66)+60*b+60*b*1.33;
    }
    printf("%.1f",t);
}
