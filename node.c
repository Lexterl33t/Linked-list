#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node *init_list(int value)
{
  Node *node = malloc(sizeof(Node));
  node->value = value;
  node->previous = NULL;
  node->next = NULL;
  return node;
}

void insert_element(Node *last, int value)
{
  while(last->next)
    last = last->next;

  last->next = malloc(sizeof(Node));
  last->next->previous = last;
  last->next->value = value;
  last->next->next = NULL;
}

int size_node(Node *node)
{
  int len = 0;
  while(node) {
    len++;
    node = node->next;
  }
  return len;
}

void print_list(Node *node)
{
  do {
    printf("%d\n", node->value);
    node = node->next;
  }while(node);
}
