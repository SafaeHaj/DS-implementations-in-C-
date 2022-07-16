//Singly Linked List Implementation

typedef struct nodey{
        int data;
        struct nodey *next;
    } node;

node *head;

/////////////////////////////////////////////////


int getel(node* x) {
    node* temp = head;
    
    while(temp != x) {
        temp = temp->next;
    }
    return temp->data;
}

void setel(node* i, int val) {
    node* temp = head;
    
    while(temp != i) {
        temp = temp->next;
    }
    temp->data = val;
}

node* findtail(node* h) {
    node* temp = h;

    while (temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}

int getsize(node *h) {
    node *temp = h;
    int n = 0;

    if (h == NULL) return n;
    while (temp != NULL) {
        temp = temp->next;
        n++;
    }
    return n;
}

void Insert(node** h,int x, int loc) {
    node *temp, *nixt;
    node* boi = (node*)malloc(sizeof(node));
    
    /* Working of loc variable: 
        if loc == 0 the element gets inserted at the beginning
        if loc == randint the element gets inserted at given location */
   if (loc == 0) {
        boi->data = x;
        boi->next = *h;
        *h = boi;
        }
   
   else if( *h != NULL && 0< loc < getsize(*h)) {
        temp = *h;
        for (int i=0; i<loc; i++) {
            temp = temp->next;
            nixt = temp->next;
        }
        boi->next = nixt;
        temp->next = boi;
        boi->data = x;
        } 
    
    else printf("\nMa dude watcha tryna do? loc must be between 0 and size of LL");
}

void Remove(node** h, int loc) {
    node *temp, *prev, *nixt;
   
    if(*h != NULL) {
        if (loc == 0) {
            *h = (*h)->next;
        }

        else {
            temp = *h;
            for (int i=0; i<loc; i++) {
                prev = temp;
                temp = temp->next;
                nixt = temp->next;
            }
            temp = NULL;
            prev->next = nixt;
        }
   }

   else printf("\nLinked List Empty");
}

void Print(node *s) {
    node* temp = s;
    
    printf("\n");
    while(temp != NULL) {
        printf("%d >",temp->data);
        temp = temp->next;
    }
}