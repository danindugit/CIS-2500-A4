#include "headerA4.h"

/******
 sortID:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
void sortID (tweet ** head, tweet ** tail){
    tweet* ptr1;
    tweet* ptr2;
    tweet* temp;

    if(isEmpty(*head)){
        printf("Cannot sort because this tweet list is empty.\n");
        return;
    }
    //bubble sort
    while(ptr1 != NULL){
        
    }
}

/******
 reverse:  reverses tweetlist
 In: the head and tail nodes
 Out: none
*******/
void reverse (tweet ** head, tweet ** tail){
    if(isEmpty(*head)){
        printf("Cannot reverse because this tweet list is empty.\n");
        return;
    }
}

/******
 sortUsername:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
void sortUsername (tweet ** head, tweet ** tail){
    if(isEmpty(*head)){
        printf("Cannot sort because this tweet list is empty.\n");
        return;
    }
}