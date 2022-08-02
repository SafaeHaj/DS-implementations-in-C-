#ifndef DLLFCTS_H
#define DLLFCTS_H

// Doubly Linked List Implementation in C

typedef struct nodey
{
    int data;
    struct nodey *prev;
    struct nodey *next;
} node;

node *head;
node *tail;

////////////////////////////////////////////////

int getel(node *x)
{
    node *temp = head;

    while (temp != x)
    {
        temp = temp->next;
    }
    return temp->data;
}

void setel(node *i, int val)
{
    node *temp = head;

    while (temp != i)
    {
        temp = temp->next;
    }
    temp->data = val;
}

int getsize(node *h)
{
    node *temp = h;
    int n = 0;

    while (temp != NULL)
    {
        temp = temp->next;
        n++;
    }
    return n;
}

void InsertbHead(int x, int loc)
{
    node *temp;
    node *boi = (node *)malloc(sizeof(node));

    if (loc == 0)
    {
        boi->data = x;
        boi->prev = NULL;
        head->prev = boi;
        boi->next = head;
        head = boi;
    }

    if (head != NULL && 0 < loc < getsize(head))
    {
        temp = head;
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
        }
        boi->next = temp->next;
        boi->prev = temp;
        temp->next->prev = boi;
        temp->next = boi;
        boi->data = x;
    }

    else
        printf("Ma dude watcha tryna do? loc must be between 0 and size of DLL");
}

void InsertbTail(int x, int loc)
{
    node *temp;
    node *boi = (node *)malloc(sizeof(node));

    if (loc == -1)
    {
        boi->data = x;
        tail->next = boi;
        boi->prev = tail;
        boi->next = NULL;
        tail = boi;
    }

    if (head != NULL)
    {

        // loc must be a negative value
        if (loc >= -(getsize(head)) && loc < -1)
        {
            temp = tail;
            for (int i = -1; i > loc; i--)
            {
                temp = temp->prev;
            }
            boi->prev = temp->prev;
            boi->next = temp;
            temp->prev->next = boi;
            temp->prev = boi;
            boi->data = x;
        }
        else
            printf("\nMa dude watcha tryna do? loc must be between -size of DLL and -1");
    }

    else
    {
        char r;
        printf("\nEmpty List, enter value for head?\n");
        scanf("%c", &r);
        if (r == 'y')
        {
            int val;
            scanf("%i", &val);
            InsertbHead(val, 0);
        }
    }
}

void RemovebHead(int loc)
{
    node *temp;

    if (loc == 0)
    {
        head->next->prev = NULL;
        head = head->next;
    }

    else
    {
        temp = head;
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp = NULL;
    }
}

void RemovebTail(int loc)
{
    node *temp;

    if (loc == -1)
    {
        tail->prev->next = NULL;
        tail = tail->prev;
    }

    else
    {
        temp = tail;
        for (int i = -1; i > loc; i--)
        {
            temp = temp->prev;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        temp = NULL;
    }
}

void Print(node *s)
{
    node *temp = s;

    printf("\n");
    while (temp != NULL)
    {
        printf("%d >", temp->data);
        temp = temp->next;
    }
}

void ReversePrint(node *s)
{
    node *temp = s;

    printf("\nReverse Print:\n");
    while (temp != NULL)
    {
        printf("%d >", temp->data);
        temp = temp->prev;
    }
}

#endif