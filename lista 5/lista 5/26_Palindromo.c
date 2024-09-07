#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char data;
    struct Node *next;
} Node;

Node *top = NULL;

void push(char c)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = c;
    node->next = top;
    top = node;
}

char pop()
{
    if (top == NULL)
    {
        return '\0';
    }
    Node *node = top;
    top = top->next;
    char c = node->data;
    free(node);
    return c;
}

int is_palindrome(char *str, int n)
{
    for (int i = 0; i < n; i++)
    {
        push(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (pop() != str[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    char str[n + 1];
    scanf("%s", str);
    printf("%d\n", is_palindrome(str, n));
    return 0;
}