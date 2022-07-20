#ifndef SR_LL_H
#define SR_LL_H

#include "SLLfcts.h"

void Reverse(node *h)
{
    node *temp = h, *prev = NULL, *nixt;

    while (temp != NULL)
    {
        nixt = temp->next;
        temp->next = prev;
        prev = temp;
        temp = nixt;
    }
    head = prev;
}

// Merge Sort Algorithm
node *merge(node *h, node *t)
{ // merging two sorted linked lists

    node *tail = (node *)(malloc(sizeof(node))); // empty node
    node *first = tail;

    if (h == NULL)
        return t;
    if (t == NULL)
        return h;

    while (h && t)
    {
        if (h->data < t->data)
        {
            tail->next = h;
            h = h->next;
        }
        else
        {
            tail->next = t;
            t = t->next;
        }
        tail = tail->next;
    }

    if (h)
        tail->next = h;
    if (t)
        tail->next = t;

    return first->next; // first->next is the initial tail node which has the smallest value
}

node *middle(node *h)
{
    /*
    initial idea for getting the midpoint
    for (int i=0; i< ((getsize(h))/2)-1;i++) {
            mid = mid->next;
        }
    */
    // Runner Method
    node *slow = h, *fast = h->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void Sort(node **h)
{
    node *left, *right, *mid;

    // break condition: list is empty or has 1 element
    if (*h == NULL || (*h)->next == NULL)
        return;

    mid = middle(*h);
    // split into two halves
    left = *h;
    right = mid->next;
    mid->next = NULL;

    Sort(&left);
    Sort(&right);

    *h = merge(left, right);
}

#endif