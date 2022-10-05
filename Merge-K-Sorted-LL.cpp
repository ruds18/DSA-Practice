#include <queue>
class compare{
    public:
    bool operator()(Node<int>*a, Node<int>*b){
        return a->data > b->data;
    }
};

Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
   priority_queue<Node<int>* , vector<Node<int>*>, compare>pq;
    int k = listArray.size();
    
    if(k ==0 ) return NULL;
    //Step 1
    for(int i=0; i<k; i++){
        if(listArray[i]!= NULL){
            pq.push(listArray[i]);
        }
    }
    Node<int>* head = NULL;
    Node<int>* tail = NULL;
    while(pq.size()>0){
        Node<int>*top = pq.top();
        pq.pop();
        
        if(head == NULL){
            head= top;
            tail = top;
     
            if(head->next != NULL){
                pq.push(tail->next);
            }
        }
        else{
                tail->next = top;
                tail = top;
                if(tail->next != NULL){
                    pq.push(tail->next);
                }
            }
        }
    return head;
}
