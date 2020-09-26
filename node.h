#ifndef NODE_HEADER
#define NODE_HEADER

typedef struct Node Node;

struct Node {
  int value;
  Node *next;
  Node *previous;
};

Node *init_list(int value);
void insert_element(Node *last, int value);
void print_list(Node *node);

#endif
