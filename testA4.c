/*
 Student Name: Danindu Marasinghe
 Student ID: 1093791
 Due Date: April 5, 2021
 Course: CIS*2500
 I have exclusive control over this submission via my password. 
 By including this header comment, I certify that:
 1) I have read and understood the policy on academic integrity.
 2) I have completed Moodle's module on academic integrity.
 3) I have achieved at least 80% on the academic integrity quiz
 I assert that this work is my own. I have appropriate acknowledged
 any and all material that I have used, be it directly quoted or
 paraphrased. Furthermore, I certify that this assignment was written
 by me in its entirety.
*/

#include "headerA4.h"

int main(){
    tweet* head;
    tweet* tail;
    tweet* t1;
    tweet* t2;
    tweet* t3;
    tweet* t4;
    tweet* t5;
    tweet* t6;

    head = NULL;
    tail = NULL;
    t1 = malloc(sizeof(tweet));
    t2 = malloc(sizeof(tweet));
    t3 = malloc(sizeof(tweet));
    t4 = malloc(sizeof(tweet));
    t5 = malloc(sizeof(tweet));
    t6 = malloc(sizeof(tweet));

    t1->id = 100;
    strcpy(t1->user, "uog");
    strcpy(t1->text, "This is from guelph");
    t1->next = NULL;

    t2->id = 200;
    strcpy(t2->user, "uoft");
    strcpy(t2->text, "This is from toronto");
    t2->next = NULL;

    t3->id = 300;
    strcpy(t3->user, "Western");
    strcpy(t3->text, "This is from london");
    t3->next = NULL;

    t4->id = 400;
    strcpy(t4->user, "mac");
    strcpy(t4->text, "This is from hamilton");
    t4->next = NULL;

    t5->id = 500;
    strcpy(t5->user, "uow");
    strcpy(t5->text, "This is from waterloo");
    t5->next = NULL;

    t6->id = 600;
    strcpy(t6->user, "utm");
    strcpy(t6->text, "This is from sauga");
    t6->next = NULL;

    //test with empty list
    printf("TESTING WITH AN EMPTY QUEUE:\n-------------------\n");
    printf("\nTesting isEmpty. Should return 1. [Iteration 1]:\n");
    if(isEmpty(head) == 1){
        printf("SUCCESS. isEmpty returns %d\n", isEmpty(head));
    }
    else{
        printf("FAIL. isEmpty returns %d\n", isEmpty(head));
    }
    printf("\nTesting dequeue. Should result in error message. [Iteration 1]:\n");
    dequeue(&head, &tail);
    printf("\nTesting sortID. Should result in error message. [Iteration 1]:\n");
    sortID(&head, &tail);
    printf("\nTesting sortUsername. Should result in error message. [Iteration 1]:\n");
    sortUsername(&head, &tail);
    printf("\nTesting reverse. Should result in error message. [Iteration 1]:\n");
    reverse(&head, &tail);
    printf("\nTesting printQueue. Should result in error message. [Iteration 1]:\n");
    printQueue(head);

    //enqueue all
    printf("\n\n\nTESTING WITH 6 ENQUEUES\n-------------------\n");
    printf("\nTesting enqueue with the following tweet: [Iteration 1]\n");
    printf("%d: Created by %s: %s\n", t3->id, t3->user, t3->text);
    enqueue(&head, &tail, t3);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting enqueue with the following tweet: [Iteration 2]\n");
    printf("%d: Created by %s: %s\n", t4->id, t4->user, t4->text);
    enqueue(&head, &tail, t4);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting enqueue with the following tweet: [Iteration 3]\n");
    printf("%d: Created by %s: %s\n", t2->id, t2->user, t2->text);
    enqueue(&head, &tail, t2);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting enqueue with the following tweet: [Iteration 4]\n");
    printf("%d: Created by %s: %s\n", t6->id, t6->user, t6->text);
    enqueue(&head, &tail, t6);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting enqueue with the following tweet: [Iteration 5]\n");
    printf("%d: Created by %s: %s\n", t5->id, t5->user, t5->text);
    enqueue(&head, &tail, t5);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting enqueue with the following tweet: [Iteration 6]\n");
    printf("%d: Created by %s: %s\n", t1->id, t1->user, t1->text);
    enqueue(&head, &tail, t1);
    printf("Printing queue to verify enqueue:\n");
    printQueue(head);
    printf("\nTesting isEmpty. Should return 0. [Iteration 2]:\n");
    if(isEmpty(head) == 0){
        printf("SUCCESS. isEmpty returns %d\n", isEmpty(head));
    }
    else{
        printf("FAIL. isEmpty returns %d\n", isEmpty(head));
    }
    //sort by ID
    printf("\nTesting sortID. [Iteration 2]:\n");
    sortID(&head, &tail);
    printf("Printing queue to verify sort by ID:\n");
    printQueue(head);
    //sort by username
    printf("\nTesting sortUsername. [Iteration 2]:\n");
    sortUsername(&head, &tail);
    printf("Printing queue to verify sort by username:\n");
    printQueue(head);
    //reverse
    printf("\nTesting reverse. [Iteration 2]:\n");
    reverse(&head, &tail);
    printf("Printing queue to verify reverse:\n");
    printQueue(head);

    printf("\n\n\nTESTING WITH 2 DEQUEUES\n-------------------\n");
    //dequeue 2
    printf("\nTesting dequeue. [Iteration 2]:\n");
    dequeue(&head, &tail);
    printf("Printing queue to verify dequeue:\n");
    printQueue(head);
    printf("\nTesting dequeue. [Iteration 3]:\n");
    dequeue(&head, &tail);
    printf("Printing queue to verify dequeue:\n");
    printQueue(head);
    printf("\nTesting isEmpty. Should return 0. [Iteration 3]:\n");
    if(isEmpty(head) == 0){
        printf("SUCCESS. isEmpty returns %d\n", isEmpty(head));
    }
    else{
        printf("FAIL. isEmpty returns %d\n", isEmpty(head));
    }
    //sort by ID
    printf("\nTesting sortID. [Iteration 3]:\n");
    sortID(&head, &tail);
    printf("Printing queue to verify sort by ID:\n");
    printQueue(head);
    //sort by username
    printf("\nTesting sortUsername. [Iteration 3]:\n");
    sortUsername(&head, &tail);
    printf("Printing queue to verify sort by username:\n");
    printQueue(head);
    //reverse
    printf("\nTesting reverse. [Iteration 3]:\n");
    reverse(&head, &tail);
    printf("Printing queue to verify reverse:\n");
    printQueue(head);

    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
    free(t6);

    return 0;
}