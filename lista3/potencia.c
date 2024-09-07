#include<stdio.h>

double potencia( float a,  float b){
   if(b == 0)
        return 1;
    else{
        if (b < 0)
        {
            return 1/a * potencia(a,b+1);
        }else
            return a * potencia(a,b-1);
    }
}


int main(){
     float a,b;
    scanf("%f %f",&a , &b);
    if (a==0 && b<=0){
        printf("indefinido\n");
        return 0;
    }else
    printf("%.2lf\n",potencia(a,b));
    return 0;

}