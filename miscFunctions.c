#include "headerA4.h"

/******
 sortID:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
void sortID (tweet ** head, tweet ** tail){
    tweet* ptr1;
    tweet* ptr2;
    tweet* tempTail;

    tempTail = *tail;
    ptr1 = *head;
    ptr2 = *head;

    if(isEmpty(*head)){
        printf("Cannot sort because this tweet list is empty.\n");
        return;
    }
    //bubble sort
    while(ptr1->next != NULL){
        ptr2 = *head;
        while(ptr2 != tempTail){
            if(ptr2->id > ptr2->next->id){
                swap(ptr2, ptr2->next);
            }
            ptr2 = ptr2->next;
        }
        tempTail = ptr2;
        ptr1 = ptr1->next;
    }

    printf("Successfully Sorted by ID.\n");
}

/******
 reverse:  reverses tweetlist
 In: the head and tail nodes
 Out: none
*******/
void reverse (tweet ** head, tweet ** tail){
    tweet* endNode;
    tweet* ptr;

    endNode = *tail;

    if(isEmpty(*head)){
        printf("Cannot reverse because this tweet list is empty.\n");
        return;
    }

    while(endNode != *head){
        //swap all elements one by one until the end node is reached
        //keep repeating this until the endnode is the head
        //initialize ptr to the head
        ptr = *head;
        while(ptr->next != endNode){
            swap(ptr, ptr->next);

            ptr = ptr->next;
        }
        //swap one more time to catch the end node
        swap(ptr, ptr->next);
        //since we are now at the penultimate node, make this the new end node
        endNode = ptr;
    }
    //success output
    printf("The queue has been successfully reversed.\n");
}

/******
 sortUsername:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
void sortUsername (tweet ** head, tweet ** tail){
    tweet* ptr1;
    tweet* ptr2;
    tweet* tempTail;
    char word1[51];
    char word2[51];
    int k;

    tempTail = *tail;
    ptr1 = *head;
    ptr2 = *head;
    k = 0;

    if(isEmpty(*head)){
        printf("Cannot sort because this tweet list is empty.\n");
        return;
    }

    //bubble sort
    while(ptr1->next != NULL){
        ptr2 = *head;
        while(ptr2 != tempTail){
            //convert words to lowercase
            strcpy(word1, ptr2->user);
            for(k = 0; k < strlen(word1); k++){
                if(word1[k] <= 90){
                    word1[k] += 32;
                }
            }
            strcpy(word2, ptr2->next->user);
            for(k = 0; k < strlen(word2); k++){
                if(word2[k] <= 90){
                    word2[k] += 32;
                }
            }
            if(strcmp(word1, word2) > 0){
                swap(ptr2, ptr2->next);
            }
            ptr2 = ptr2->next;
        }
        tempTail = ptr2;
        ptr1 = ptr1->next;
    }

    printf("Successfully Sorted by username.\n");
}