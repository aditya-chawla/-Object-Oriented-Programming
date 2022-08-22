#include <bits/stdc++.h>
using namespace std; 
class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void deleteNode(Node** head_ref, int key)
{

    Node* temp = *head_ref;
    Node* prev = NULL;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; 
        delete temp;    
        return;
    }
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;

    delete temp;
    }
}

void printList(Node* node)
{
    while (node != NULL) 
    {
        cout << node->data <<" ";
        node = node->next;
    }
}
int getCount(Node* head)  
{  
    int count = 0;  
    Node* current = head; 
    while (current != NULL)  
    {  
        count++;  
        current = current->next;  
    }  
    return count;  
}  
bool isSortedDesc(struct Node *head)
{ 
    if (head == NULL)
        return true;

    for (Node *t=head; t->next != NULL; t=t->next)
       if (t->data <= t->next->data)
            return false;
    return true;
}
void sumOfNodes(Node* head, int* sum) 
{ 
    if (!head) 
        return; 

    sumOfNodes(head->next, sum); 

    *sum = *sum + head->data; 
}  
int sumOfNodesUtil(Node* head) 
{ 

    int sum = 0; 

    sumOfNodes(head, &sum); 

    return sum; 
} 
bool search( Node* head, int x)  
{  

    if (head == NULL)  
        return false;  

    if (head->data == x)  
        return true;  

    return search(head->next, x);  
}  

int main() 
{ 
    Node* head = NULL;  
    cout<<"The number of nodes you want : ";
    int n;
    cin>>n;
    for(int i =1 ; i<=n ;i++){
        int a ;
        cout<<"Enter data for node "<<i<<" : ";
        cin>>a;
        push(&head,a);  
    }
    cout<<"\nCount of nodes is "<< getCount(head); 
    cout<<"\nCreated Linked List: ";
    printList(head);
    cout<<"\nEnter the number you want to delete :- ";
    int y;
    cin>>y;
    deleteNode(&head, y);
    cout<<"\nLinked List after Deletion : ";

    printList(head);
    isSortedDesc(head) ? cout <<"\nlist is sorted " : 
                         cout <<"\nlist is unsorted ";

    cout <<"\nSum of nodes = "<< sumOfNodesUtil(head)<<endl;
    cout<<"Enter the number you want to search :- ";
    int x;
    cin>>x;
    search(head, x)? cout<<"found " : cout<<"\nNot found ";


    return 0; 

} 

