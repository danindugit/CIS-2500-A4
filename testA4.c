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

    //check if empty
    printf("isEmpty returns %d\n", isEmpty(head));
    dequeue(&head, &tail);
    sortID(&head, &tail);
    sortUsername(&head, &tail);
    printQueue(head);
    //sort by username
    sortUsername(&head, &tail);
    printQueue(head);

    //enqueue all
    enqueue(&head, &tail, t3);
    enqueue(&head, &tail, t4);
    enqueue(&head, &tail, t2);
    enqueue(&head, &tail, t6);
    enqueue(&head, &tail, t5);
    enqueue(&head, &tail, t1);
    printf("isEmpty returns %d\n", isEmpty(head));
    printQueue(head);
    //sort by ID
    sortID(&head, &tail);
    printQueue(head);
    //sort by username
    sortUsername(&head, &tail);
    printQueue(head);

    //dequeue 2
    dequeue(&head, &tail);
    dequeue(&head, &tail);
    printf("isEmpty returns %d\n", isEmpty(head));
    printQueue(head);
    //sort by ID
    sortID(&head, &tail);
    printQueue(head);
    //sort by username
    sortUsername(&head, &tail);
    printQueue(head);

    free(t1);
    free(t2);
    free(t3);
    free(t4);
    free(t5);
    free(t6);

    return 0;
}