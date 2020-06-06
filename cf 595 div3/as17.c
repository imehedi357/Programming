#include <stdio.h>
#include <malloc.h>

struct node
{
    int val;
    struct node *next;
}*start;

void insert(int val)
{
    struct node *cur = (struct node*) malloc(sizeof(struct node)), *temp;
    cur->val = val;
    cur->next = NULL;
    if(start==NULL)
    {
        start = cur;
        return;
    }
    temp = start;
    while(temp->next!=NULL) temp = temp->next;
    temp->next = cur;
}

void deleteStart()
{
    if(start==NULL)
    {
        puts("Underflow!");
        return;
    }
    struct node *temp = start;
    start = start->next;
    free(temp);
}

void insertAtPos(int val, int pos) 
{
    struct node *cur = (struct node*) malloc(sizeof(struct node));
    cur->val = val;
    cur->next = NULL;
    if(pos == 1) {
        cur->val = start->val;
        cur->next = start->next;
        start->val = val;
        start->next = cur;
        return;
    }
    struct node *prev = start;
    struct node *nxt = start;
    for(int i = 1; i < pos; i++) {
        prev = nxt;
        nxt = nxt->next;
    }

    //if(nxt->next == NULL) {
    //    prev->next = NULL;
    //}
    //else {
        cur->next = prev->next;
        prev->next = cur;
    //}
    //free(nxt);
}
void deleteAtPos(int pos)
{

    if(pos == 1) {
        deleteStart();
        return;
    }
    struct node *prev = start;
    struct node *nxt = start;
    for(int i = 1; i < pos; i++) {
        prev = nxt;
        nxt = nxt->next;
    }

    if(nxt->next == NULL) {
        prev->next = NULL;
    }
    else {
        prev->next = nxt->next;
    }
    free(nxt);
}
void deleteVal(int val) {
    //struct node *temp = start;
    if(start->val == val) {
        deleteStart();
        return;
    }
    struct node *prev = start;
    struct node *nxt = start;
    while(nxt->next != NULL) {
        if(nxt->val == val) {
            break;
        }
        prev = nxt;
        nxt = nxt->next;
    }

    if(nxt->next == NULL) {
        prev->next = NULL;
    }
    else {
        prev->next = nxt->next;
    }
    free(nxt);
    
    
}

void print()
{
    struct node *temp;
    if(start==NULL)
    {
        puts("List Empty!");
        return;
    }
    temp = start;
    printf("List: ");
    do
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
    while(temp!=NULL);
    puts("");
}

int main()
{
    start=NULL;
    int n, i, x;

    scanf("%d", &n);
    print();
    for (i=0; i<n; i++)
    {
        scanf("%d", &x);
        insert(x);
        print();
    }
    insertAtPos(5, 6);
    insertAtPos(10, 7);
    insertAtPos(12,8);
    print();

    return 0;
}