https://www.hackerrank.com/challenges/reverse-a-linked-list/problem

/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head) {

    Node *curr = head;
    Node *prev = NULL;
    Node *next;

    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;

  // Complete this method
}
