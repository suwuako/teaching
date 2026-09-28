#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct list {
	struct node *head;
};

int list_sum_while(struct node *head) {
  struct node *curr = head;
  int sum = 0;

  while (curr != NULL) {
    sum += curr->value;
    curr = curr->next;
  }

  return sum;
}

int list_sum_for(struct node *head) {
  int sum = 0;

  for (struct node *curr = head; curr != NULL; curr = curr->next) {
    sum += curr->value;
  }
  return sum;
}

struct node *listDeletenode(struct node *list, int value) {
  // if list is empty
  if (list == NULL) {
    return NULL;
  }
 
  struct node *ret = list;
  struct node *curr = list;
  struct node *prev = curr;

  while (curr != NULL) {
    if (prev == curr && curr->value == value) {
      // the value we are trying to replace is the very first value
      ret = curr->next;
      free(curr);
      return ret;
    } else if (curr->value == value) {
      // not the first value
      prev->next = curr->next;
      free(curr);
      return ret;
    }
    prev = curr;
    curr = curr->next;
  }
  // we failed to find a value in the linked list that has value, so we delete nothing
  return ret;
}

void listDelete(struct list *list, int value) {
  struct node *head = list->head;
  // if list is empty
  if (head == NULL) {
    return;
  }
 
  struct node *curr = head;
  struct node *prev = head;

  while (curr != NULL) {
    if (prev == curr && curr->value == value) {
      // the value we are trying to replace is the very first value
      list->head = curr->next;
      free(curr);
      return;
    } else if (curr->value == value) {
      // not the first value
      prev->next = curr->next;
      free(curr);
      return;
    }
    prev = curr;
    curr = curr->next;
  }
  // we failed to find a value in the linked list that has value, so we delete nothing
  return;
}
