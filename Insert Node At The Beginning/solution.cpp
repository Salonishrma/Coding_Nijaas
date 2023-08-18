Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
     Node* temp=new Node;
     temp->data=newValue;
     temp->next=list;
     return temp;
    
}
