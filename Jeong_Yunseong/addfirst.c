#include <stdlib.h>
#include <stdio.h>

typedef struct NODE{
    int data;
    struct NODE* pre;
    struct NODE* next;
}node;

node* head;
node* tail;
int size;

void init();
node* getNewNode(int d);
void addFirst(int d);
void addBetween(node* prev, node* succ, int d);
void addLast(int d);
void mfree(node* head);
void Print();

int main(void){
    init();
    addFirst(2);
    addFirst(1);
    addFirst(2);
    addFirst(3);
    addLast(3);
    Print();
    mfree(head);
    return 0;
}

node* getNewNode(int d){
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = d;
    newNode->pre = NULL;
    newNode->next = NULL;
    return newNode;
}

void mfree(node* head){
    node* curr = head;
    while(curr != tail){
        curr = curr->next;
        free(curr->pre);
    }
    free(curr);
    size = 0;
}

void Print(){
    node* tmp = head->next;
    printf("Forward: ");
    while(tmp != tail){
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
}

void init(){
    head = getNewNode(0);
    tail = getNewNode(0);
    head->next = tail;
    tail->pre = head;
    size = 0;
}

void addFirst(node *list,int data) {
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = list->head->next;
    list->head->next = newNode;
    list->size++;
}

void addBetween(node* prev, node* succ, int d){
    node* newNode = getNewNode(d);
    prev->next = newNode;
    newNode->pre = prev;
    newNode->next = succ;
    succ->pre = newNode;
    size++;
}

void addLast(node* list, int data) {
    node *last = list->head;
     
    while (last->next != list->tail) 
        last = last->next;
     
    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = list->tail;
    last->next = newNode;
    list->size++;
}