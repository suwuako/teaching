struct stack {

} typedef LinkedList;

// Creates a new empty stack
LinkedList LinkedListNew(void);

// Frees all memory allocated to the stack
void LinkedListFree(LinkedList s);

// Pushes an item onto the linked list
void LinkedListPush(LinkedList s, int item);


void LinkedListAppend(LinkedList s, int item);

// Pops an item from the head of the linked list and returns it
// Assumes that the stack is not empty
int LinkedListPop(LinkedList s);

// Returns the number of items on the stack
int LinkedListSize(LinkedList s);
