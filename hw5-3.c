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
        t=a*(b*1.33);
    }
    else if(a>121){
        t=a*(b*1.66);
    }
    printf("%.1f",t);
}

