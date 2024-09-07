#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char str[101]; // Increase the size to 101 to accommodate the null terminator
    struct Node *next;
} Node;

Node *top = NULL;

void push(char *str)
{
    Node *node = (Node *)malloc(sizeof(Node));
    strncpy(node->str, str, 100); // Copy at most 100 characters
    node->str[100] = '\0';        // Ensure the string is null-terminated
    node->next = top;
    top = node;
}

char *pop()
{
    if (top == NULL)
    {
        return "NULL";
    }
    Node *node = top;
    top = top->next;
    char *str = malloc(strlen(node->str) + 1);
    strcpy(str, node->str);
    free(node);
    return str;
}

int main()
{
    char command[108];
    while (fgets(command, sizeof(command), stdin))
    {
        if (strncmp(command, "inserir", 7) == 0)
        {
            command[strlen(command) - 1] = '\0'; // Remove the newline character
            push(command + 8);
        }
        else if (strcmp(command, "desfazer\n") == 0)
        {
            printf("%s\n", pop());
        }
    }
    return 0;
}