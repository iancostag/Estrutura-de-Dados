#include <stdio.h>

int main(){
    char string1[1000],string2[1000];
    int tamanho = 0;
    scanf("%s",string1);
    for (tamanho; string1[tamanho] != '\0'; tamanho++);
    for (int i=0,j=tamanho-1;j >= 0 ; i++,j--)
    {
        string2[i] = string1[j];
    }
    string2[tamanho] = '\0';
    printf("%s\n",string2);
    return 0;
}