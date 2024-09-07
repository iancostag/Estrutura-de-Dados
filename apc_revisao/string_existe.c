#include<stdio.h>
int main(){
    int n,n1,check=1,checkerCheck=0;
    scanf("%d%d", &n,&n1);
    char listaString[n][1000],listaString2[n1][1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", listaString[i]);
    }
    for (int i = 0; i < n1; i++)
    {
        scanf("%s", listaString2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
          for (int k = 0; listaString[i][k] == listaString2[j][k]; k++)
          {
           if (listaString[i][k] == '\0' && listaString2[i][k] == '\0')
           {
            checkerCheck = 1;
            break;
           }
           
          }
      
        }
        
    }

    printf("%d",checkerCheck);
    return 0;
}