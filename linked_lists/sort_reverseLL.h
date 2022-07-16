//SORT AND REVERSE FUNCTIONS

void Reverse(node* h) {
    node *temp = h, *prev = NULL, *nixt;

    while (temp != NULL) {
        nixt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nixt;
    }
    head = prev;
}

node* merge(node* h,node* t) {
    node* first = (node*)(malloc(sizeof(node))); //empty node
    node* tail = first; //first->next now points to tail

    while (h && t) {
        if(h->data < t->data){
            tail->next = h;
            h = h->next;
        }
        else {
            tail->next = t;
            t = t->next;
        }
        tail = tail->next;
        printf("\ntail: %i", tail->data);
    }

    if (h) {
        tail->next = h;
    }
    if (t) {
        tail->next = t;
        }  
    
    return first->next; //first->next is the initial tail node which has the smallest value
}

node* middle(node* h) {
    /* 
    This was my initial idea for getting the middle point. Spoiler Alert: it doesnt work:
    for (int i=0; i< ((getsize(h))/2)-1;i++) {
            mid = mid->next;
        }
    */
   node *fast =h, *slow = h;

   while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
   }
   return slow;
}

node* Sort(node* h) {
    //MergeSort algorithm
    node* mid = h, *left, *right;
    
    //check for empty list first or only containing one element
    if (h != NULL && h->next != NULL) {
        //get middle
        mid = middle(h);
        
        left = h;
        right = mid->next;
        mid->next = NULL;

        left = Sort(left);
        right = Sort(right);
    
       return merge(left,right);
        
    }
    else return h;

}