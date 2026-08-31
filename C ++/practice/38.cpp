node* reverseLL(node* &head){
    if(head==NULL || head->next ==NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* frwd = NULL;

    while(curr!=NULL){
        frwd = curr->next;
        curr->next = frwd; 
        prev = curr;
        curr=frwd;
    }
    return prev;
}