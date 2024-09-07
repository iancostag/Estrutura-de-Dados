#include <stdio.h>
#include <string.h>
char pilha[100000];
int t;

void empilha(char c)
{
    pilha[t++] = c;
}

char desempilha()
{
    return pilha[--t];
}

int pilhavazia()
{
    return t <= 0;
}

int bemDefinida(char str[])
{
    t = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char c;
        switch (str[i])
        {
        case ')':
            if (pilhavazia())
                return 0;
            c = desempilha();
            if (c != '(')
                return 0;
            break;
        case ']':
            if (pilhavazia())
                return 0;
            c = desempilha();
            if (c != '[')
                return 0;
            break;
        case '}':
            if (pilhavazia())
                return 0;
            c = desempilha();
            if (c != '{')
                return 0;
            break;
        default:
            empilha(str[i]);
        }
    }
    return pilhavazia();
}

int main()
{
    int casos;
    scanf("%d", &casos);
    for (int i = 0; i < casos; i++)
    {
        scanf("%s", pilha);
        if (bemDefinida(pilha))
            printf("S\n");
        else
            printf("N\n");
        pilha[0] = '\0';
    }

    return 0;
}