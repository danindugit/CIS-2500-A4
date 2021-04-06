#include "headerA4.h"

/******
 enqueue:  adds a tweet to the rear of a tweetlist
 In: the head and tail nodes, and the node to add
 Out: none
*******/
void enqueue (tweet ** head, tweet ** tail, tweet * node){

    if(isEmpty(*head)){
        *head = node;
        *tail = node;
        printf("Tweet with id %d enqueued successfully\n", node->id); 
        return;
    }

    (*tail)->next = node;

    *tail = node;   
    printf("Tweet with id %d enqueued successfully\n", node->id); 
}

/******
 dequeue:  removes a tweet from the front of a tweetlist
 In: the head and tail nodes
 Out: none
*******/
void dequeue (tweet ** head, tweet ** tail){
    tweet* ptr;
    tweet* temp;

    if(isEmpty(*head)){
        printf("Dequeue unsuccessful because there are no tweets in this list\n");
        return;
    }

    temp = *head;
    ptr = temp->next;    
    *head = ptr;

    printf("Tweet with id %d dequeued successfully\n", (temp)->id); 

    free(temp);
}

/******
 isEmpty:  indicates whether a tweet list is empty or not
 In: head tweet
 Out: boolean integer 1 if empty and 0 if not empty
*******/
int isEmpty (tweet * head){
    if(head != NULL){
        return 0;
    }
    return 1;
}

/******
 printQueue:  Prints the queue
 In: the head node
 Out: none
*******/
void printQueue (tweet * head){
    tweet* ptr;

    ptr = head;

    if(isEmpty(head) == 1){
        printf("There are no tweets in this list\n");
        return;
    }

    while(ptr != NULL){
        printf("%d: Created by %s: %s\n", ptr->id, ptr->user, ptr->text);
        ptr = ptr->next;
    }
}