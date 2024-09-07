#include <stdio.h>

void trocaXY(char *v){
    if (v[0] == '\0') return;
    
    if (v[0] == 'x')
    {
        printf("y");
        trocaXY(v+1);
    }
    else  {
        printf("%c",v[0]);
        trocaXY(v+1);
    }
    return;
}
int main(){
    char v[100];
    scanf("%s",v);
    trocaXY(v); 
    printf("\n");
    return 0;
}