#include <stdio.h>
#include <stdlib.h>

// LINKED LIST

typedef struct node {
    int number;
    struct node *next;
} node;


node *list = NULL;

node *n = malloc(sizeof(node));
if (n != NULL){
    n -> number = 2;
    n -> next = NULL;
}

node *tmp = list;

while ( tmp -> next != NULL){
    tmp = tmp -> next;
}


// Adding new node to the beginning of the list
n -> list;
list = n;
