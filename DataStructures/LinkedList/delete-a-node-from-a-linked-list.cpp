https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem

/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position){
    Node *curr = head;
    Node *nextOne = curr->next;

    if (position == 0) {
        head = nextOne;
        delete curr;
    }
    else {
        int count = 0;

        while(count < position-1 && curr->next != NULL) {
            curr = nextOne;
            nextOne = nextOne->next;
            count++;
        }

        curr->next = nextOne->next;
        delete nextOne;
        nextOne = curr->next;

    }

    return head;
  // Complete this method
}
