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

int checkcycleposition(node* head){
    if (!head || !head->next) {
        return -1;
    }
    node* slow = head;
    node* fast = head;
    int count = 0;
  while(fast && fast->next){
        
       slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = head;
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
                count++;

            }
            return count;
        }
        slow = slow->next;
        fast = fast->next->next;
 }

return -1;

}

void printlist( node *head){
    node* current = head;
    while(current){
cout<<"data:"<<current->data<<endl;

current =current->next;
}
}
void createCycle(node* head, int pos) {
    if (!head || !head->next || pos <= 0) { 
        return;
    }

    node* current = head;
    node* cycleStart = nullptr;
    int count = 1;
    while (current->next) {

        if (count == pos) {
            cycleStart = current;}
        
        count++;
        current = current->next;
    }

   
    if (cycleStart) {
        current->next = cycleStart; // Connect last node only if cycleStart is found
    }
}
int main(){
    node* head = nullptr;
    push(&head, 2);
    push(&head, 45);
    push(&head, 100);
    push(&head, 110);
    printlist(head);
    createCycle(head,2);
    int pos = checkcycleposition(head);
    if(pos>0){
        cout<<"cycle start position is:"<< pos<<endl;
        
    }
    else{
        cout<< "List has no cycle"<<endl;
    }
   
 
 
 

}
