#include "headerA4.h"

/******
 swap:  swaps 2 tweets in a tweet list
 In: the 2 nodes to be swapped
 Out: none
*******/
void swap(tweet* node1, tweet* node2){
    int tempID = node1->id;
    char tempUser[51];
    char tempText[141];

    //store node1 data in the temp variables
    strcpy(tempUser, node1->user);
    strcpy(tempText, node1->text);
    //move node2 data to node1
    node1->id = node2->id;
    strcpy(node1->user, node2->user);
    strcpy(node1->text, node2->text);
    //move temp data to node2
    node2->id = tempID;
    strcpy(node2->user, tempUser);
    strcpy(node2->text, tempText);
}