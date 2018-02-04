https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem

/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data){

    Node *s = new Node;
    s->data = data;

    if(head == NULL) {
        s->data = data;
        s->next = NULL;
        return s;
    }
    else {
        Node *ptr = head;

        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        s->next = NULL;
        ptr->next = s;

        return head;
    }


  // Complete this method
}
