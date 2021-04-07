#include "headerA4.h"

/******
 enqueue:  adds a tweet to the rear of a tweetlist
 In: the head and tail nodes, and the node to add
 Out: none
*******/
void enqueue (tweet ** head, tweet ** tail, tweet * node){
    //check if empty
    if(isEmpty(*head)){
        //since this would be the first item in the queue, just set it equal to both the head and tail
        *head = node;
        *tail = node;
        printf("Tweet with id %d enqueued successfully\n", node->id); 
        return;
    }
    //otherwise, add it to the rear of the queue (the tail node's next node)
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
    //remove item from the head of the queue
    temp = *head;
    ptr = temp->next;    
    *head = ptr;

    printf("Tweet with id %d dequeued successfully\n", (temp)->id); 
    //free temporary variable
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
        //print each item in the queue until the pointer points to the end of the queue
        printf("%d: Created by %s: %s\n", ptr->id, ptr->user, ptr->text);
        ptr = ptr->next;
    }
}