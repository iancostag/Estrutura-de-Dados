#include <stdio.h> 

int main (){

    int jogadores[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &jogadores[i]);
    }
    if (jogadores[0] == jogadores[1] && jogadores[2] == jogadores [1])
    printf("empate");
    
    if (jogadores[0] == jogadores[1] && jogadores [2] != jogadores[1])
    printf("C");
    
    if (jogadores[1] == jogadores[2] && jogadores[0] != jogadores[2])
    printf("A");

    if (jogadores[0] == jogadores[2] && jogadores[1] != jogadores[2])
    printf("B");
    
    return 0;
}