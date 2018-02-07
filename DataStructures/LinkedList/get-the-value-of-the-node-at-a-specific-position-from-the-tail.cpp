https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem

/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head, int positionFromTail) {
    Node *ptr = head;
    int size = 0;
    int count = 1;
    int actualPos = 0;

    while(ptr) {
        ptr = ptr->next;
        size++;
    }

    actualPos = size - positionFromTail;
    Node *s = head;

    while(count < actualPos) {
        s = s->next;
        count++;
    }

    int answer = s->data;

    return answer;
  // This is a "method-only" submission.
  // You only need to complete this method.
}
