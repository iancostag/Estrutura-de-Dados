#include <stdio.h>

void trocax(char *v){
    if (v[0] == '\0') return;

    if (v[0] == 'x')
    {
        trocax(v+1);
        printf("x");
    }
    else  {
        printf("%c",v[0]);
        trocax(v+1);
    }
    return;
}
int main(){
    char *v[101];
    scanf("%s",v);
    trocax(v); 
    printf("\n");
    return 0;
}