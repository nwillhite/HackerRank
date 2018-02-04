https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

/*
  Insert Node at a given position in a linked list
  head can be NULL
  First element in the linked list is at position 0
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position) {
    Node *s = new Node;
    s->data = data;

    if(head == NULL) {
        s->next = NULL;

        return s;
    }
    else {
        Node *curr = head;
        int count = 0;

        if(position == 0){
            s->next = head;
            return s;
        }

        while(count < position-1 && curr->next != NULL) {
            curr = curr->next;
            count++;
        }

        s->next = curr->next;
        curr->next = s;

        return head;

    }
  // Complete this method only
  // Do not write main function.
}
