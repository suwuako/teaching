#include <stdlib.h>
#include <stdio.h>

struct node {
	int value;
	struct node *next;
};

int num_in_ll(struct node *head);

int main() {
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));

    head->value = 2;
    second->value = 5;
    third->value = 7;

    head->next = second;
    second->next = NULL;

    third->next = NULL;

    int num_items_in_ll = num_in_ll(head);
    printf("there are %d items in our linekd list\n", num_items_in_ll);
}

int num_in_ll(struct node *head) {
    if (head == NULL) {
        return 0;
    }

    return 1 + num_in_ll(head->next);
}


































/*
#include <stdio.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main() {
    int num;
    char a[10], b[10], c[10];

    scanf("%d", &num);
    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    solveHanoi(num, a, b, c);

}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    if (numDisks == 0) return;
    // move everything except for bottom disk to otherRod
    solveHanoi(numDisks-1, fromRod, otherRod, toRod);
    // move bottom disk to toRod
    printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);
    // move everything on otherRod to toRod
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}

*/
