https://www.hackerrank.com/challenges/compare-two-linked-lists/problem

/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB){

    Node *ptrA = headA;
    Node *ptrB = headB;
    int answer = 0;

    while(ptrA && ptrB) {
        if(ptrA->data == ptrB->data) {
            ptrA = ptrA->next;
            ptrB = ptrB->next;
            answer = 1;
        }
        else {
            answer = 0;
            return answer;
        }
    }

    if((ptrA && !ptrB) || (!ptrA && ptrB)) {
        answer = 0;
    }


    return answer;

  // This is a "method-only" submission.
  // You only need to complete this method
}
