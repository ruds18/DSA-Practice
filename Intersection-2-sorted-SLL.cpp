Node* findIntersection(Node* head1, Node* head2)
{
   //New LL
   Node* dummyHead = new Node(-1);
   Node* dummyTail =  dummyHead;
   
   while(head1 && head2){
       // Are sorted
       if(head1->data < head2->data){
           head1 = head1->next;
       }
       else if(head1->data > head2->data){
           head2 = head2->next;
       }
       else{
           //equal 
           //tail insertion 
           dummyTail->next = new Node(head2->data);
           dummyTail = dummyTail->next;
           
           head1 = head1->next;
           head2 = head2->next;
       }
   }
   return dummyHead->next;
   
}