#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  int priority;
  struct Node* next;
} Node;

Node* create_node(int data, int priority) {
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->priority = priority;
  node->next = NULL;
  return node;
}

void divide_linked_list(Node* head, Node** output_lists) {
  for (int i = 0; i < 6; i++) {
    output_lists[i] = NULL;
  }

  Node* current = head;
  while (current != NULL) {
    int priority = current->priority;
    if (output_lists[priority] == NULL) {
      output_lists[priority] = create_node(current->data, current->priority);
    } else {
      Node* temp = output_lists[priority];
      while (temp->next != NULL) {
        temp = temp->next;
      }
      temp->next = create_node(current->data, current->priority);
    }

    current = current->next;
  }
}

void print_linked_list(Node* head) {
  Node* current = head;
  while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("\n");
}

int main() {
  Node* head = create_node(1, 5);
  head->next = create_node(2, 3);
  head->next->next = create_node(3, 1);
  head->next->next->next = create_node(4, 2);

  Node** output_lists = (Node**)malloc(sizeof(Node*) * 6);

  divide_linked_list(head, output_lists);

  for (int i = 0; i < 6; i++) {
    printf("Priority %d: ", i);
    print_linked_list(output_lists[i]);
  }

  return 0;
}
