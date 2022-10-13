#include <stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *create_doubly_list() {
    struct node *head, *p;
    int n;
    printf("\nEnter number of elements to be inserted: ");
    scanf("%d", &n);
    printf("Enter the data:\n");
    for(int i = 0; i < n; i++) {
        if(i == 0) {
            head = (struct node*)malloc(sizeof(struct node));
            p = head;
            p -> prev = NULL;
        }
        else
        {
            p->next=(struct node*)malloc(sizeof(struct node));
            struct node *q = p -> next;
            q -> prev = p;
            p = p -> next;
        }
        scanf("%d", &(p -> data));
    }
    p -> next = NULL;
    return head;
}

struct node *insert_at_beg(struct node *head) {
    struct node *new;
    new = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("\nEnter data to add at the begining: ");
    scanf("%d", &value);
    new -> data = value;
    new -> next = head;
    new -> prev = NULL;
    if(head != NULL)
    head -> prev = new;
    head = new;
    return head;
}

struct node *insert_at_end(struct node *head) {
    struct node *new, *p;
    p = head;
    new = (struct node*)malloc(sizeof(struct node));
    int value;
    printf("\nEnter data to add at the end:\n");
    scanf("%d", &value);
    new -> data = value;
    while(p -> next != NULL)
    p = p -> next;
    new -> next = NULL;
    p -> next = new;
    new -> prev = p;
    return head;
}

struct node* insert_at_position(struct node* head) {
    struct node *p, *new;
    new = (struct node*)malloc(sizeof(struct node));
    int value, position;
    printf("\nEnter the position number to add the data: ");
    scanf("%d", &position);
    printf("\nEnter the number to be added: ");
    scanf("%d", &value);
    new -> data = value;
    p = head;
    for(int i = 1; i < position - 1; i++) {
      p = p -> next;
    }
    p -> next -> prev = new;
    new -> next = p -> next;
    new -> prev = p;
    p -> next = new;
    return head;
}

struct node *reversal(struct node* head) {
    struct node *p;
    int count = 0;
    while(p -> next != NULL) {
        p = p -> next;
    }
    while(p != NULL) {
        printf("Node %d: %d\n",count, p -> data);
        p = p -> prev;
        count++;
    }
    printf("\n");
    return head;
}

void display_doubly_list(struct node *head) {
    struct node *p;
    p = head;
    int count = 0;
    while(p -> next != NULL) {
        printf("Node %d: %d\n", count, p -> data);
        p = p -> next;
        count++;
    }
    printf("Node %d: %d\n", count, p -> data);
}

int main() {
    struct node *head = NULL;
    head = create_doubly_list();
    display_doubly_list(head);
    head = insert_at_beg(head);
    display_doubly_list(head);
    head = insert_at_end(head);
    display_doubly_list(head);
    head = insert_at_position(head);
    display_doubly_list(head);
    printf("\nDoubly linked list after reversal:\n");
    head = reversal(head);
     
    return 0;
}
