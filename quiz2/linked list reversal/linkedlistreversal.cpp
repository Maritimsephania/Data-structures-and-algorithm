#include<iostream>
using namespace std;

struct Node{
int data;
struct Node* next;
Node(int newdata){
    data = newdata;
    next = nullptr;
}

};

void push(struct Node** head_ref, int newdata)
{
    
    Node* new_node = new Node(newdata);

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

void linklistreversal(struct Node** headref){
Node* current = *headref;
Node* previous = nullptr;
Node* next = nullptr;

while(current){
    next = current->next;
    current->next = previous;

    previous = current;
    current = next;
    
}
*headref = previous;

}

void printlist(Node* head){
   Node* current = head;

    while(current){

        cout<<"data:"<<current->data<<endl;
        current = current->next;
    } 

}


int main(){
    struct Node* head = nullptr;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    printlist(head);

   linklistreversal(&head);
   printlist(head);

    return 0;
}