#include <stdio.h>
#include <stdlib.h>
#include "node.h"

Node *node_init(int value)
{
  Node *node = malloc(sizeof(Node));
  node->value = value;
  node->previous = NULL;
  node->next = NULL;
  return node;
}

void node_insert(Node *last, int value)
{
  while(last->next)
    last = last->next;

  last->next = malloc(sizeof(Node));
  last->next->previous = last;
  last->next->value = value;
  last->next->next = NULL;
}

int node_size(Node *node)
{
  int len = 0;
  while(node) {
    len++;
    node = node->next;
  }
  return len;
}

void node_print(Node *node)
{
  do {
    printf("%d\n", node->value);
    node = node->next;
  }while(node);
}

Node *node_get(Node *node, int index)
{
  while(node->previous)
    node = node->previous;

  for (size_t i = 0; i < index; i++) {
    node = node->next;
  }

  return node;
}

void node_delete(Node *element)
{
  element->previous->next = element->next;
  element->next->previous = element->previous;
  free(element);
}
