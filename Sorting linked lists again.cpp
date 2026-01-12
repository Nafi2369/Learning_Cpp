#include<iostream>

using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insertion_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    
    if(head==NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void sort_linked_list(Node* head)
{
    Node* temp = head;
    
    while(temp->next!=NULL)
    {
        Node* temp2 = temp->next;
        while(temp2!=NULL)
        {
            if(temp2->val < temp->val)
            {
                Node* swap = temp2;
                temp2->val = temp->val;
                temp->val = swap->val;
            }
        }
    }
}

void print_linked_list(Node* head)
{
    Node* temp = head;

    while(temp!=NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int x;
    cout << "Enter a value: ";

    while(cin>>x && x!=0)
    {
        insertion_at_tail(head,tail,x);
        cout << "Enter another value: ";
    }

    sort_linked_list(head);
    
    print_linked_list(head);
    return 0;
}