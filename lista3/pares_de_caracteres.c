#include <stdio.h>

int verificaPar(char *a){
    if (a[0] == '\0')
        return 0;
    if (a[0] == a[2])
    return 1 + verificaPar(a + 1);
    
    return verificaPar(a+1);

}

int main(){
    char v[300];
    scanf("%s", v);
    printf("%d",verificaPar(v));
    return 0;

}