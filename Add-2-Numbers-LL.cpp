class Solution
{
     public:

    Node* reverse( Node* head)

    {

        Node* curr=head;

        Node* prev=NULL;

        Node* forw=NULL;

        while(curr!=NULL)

        {

           forw =curr->next;

            curr->next=prev;

            prev=curr;

            curr=forw;

        }

        return prev;

    }

    void insertattail(struct Node* &head, struct Node* &tail , int val)

    {

        Node* temp= new Node(val);

        if(head==NULL)

        {

            head=temp;

            tail=temp;

            return ;

        }

        else

        {

            tail->next=temp;

            tail=temp;

        }

    }

    struct Node* add(struct Node* first, struct Node* second)

    {

        int carry=0;

        Node* ahead=NULL;

        Node* atail=NULL;

        while(first!=NULL && second!=NULL)

        {

            int sum= carry + first->data + second->data;

            int digit=sum%10;

            insertattail(ahead,atail,digit);

            carry=sum/10;

            first=first->next;

            second=second->next;

        }

        while(first!=NULL)

        {

            int sum= carry+first->data;

            int digit=sum%10;

            insertattail(ahead, atail, digit);

            carry=sum/10;

            first=first->next;

        }

          while(second!=NULL)

        {

            int sum= carry+second->data;

            int digit=sum%10;

            insertattail(ahead, atail, digit);

            carry=sum/10;

            second=second->next;

        }

        while(carry!=0)

        {

           

            int sum= carry;

            int digit=sum%10;

            insertattail(ahead, atail, digit);

            carry=sum/10; 

        }

        return ahead;

    }

    //Function to add two numbers represented by linked list.

    struct Node* addTwoLists(struct Node* first, struct Node* second)

    {

      first= reverse(first);

      second= reverse(second);

     Node* ans=add(first,second);

      ans = reverse(ans);

      return ans;

    }
};