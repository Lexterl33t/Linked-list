#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, char **argv)
{
  Node *node_initialisation = node_init(0);

  node_insert(node_initialisation, 1337);
  node_insert(node_initialisation, 1220);
  node_insert(node_initialisation, 1789);
  node_insert(node_initialisation, 1455);
  node_insert(node_initialisation, 7899);



  node_print(node_initialisation);

  printf("Hello world\n");
  printf("%d\n", node_get(node_initialisation, 3)->value);
}
