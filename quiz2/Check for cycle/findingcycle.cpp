#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;

     node(int newdata){
data= newdata;
next = nullptr;

     }

};

void push(struct node** head_ref, int new_data)
{

    struct node* new_node = new node(new_data);

    /* link the old list of the new node */
    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}

bool checkcycle(node* head){
    if (!head || !head->next) {
        return false;
    }
    node* slow = head;
    node* fast = head;
  while(fast && fast->next){
        
       slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
 }

return false;

}

void printlist( node *head){
    node* current = head;
    while(current){
cout<<"data:"<<current->data<<endl;

current =current->next;
}
}
int main(){
    node* head = nullptr;
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
    printlist(head);
 //head->next-> next = head;
 if(checkcycle(head)){
    cout<<"there exist"<<endl;

 }
 else{
    cout<< "linked list has no cycle"<<endl;
 }

}