Info:
Name: Danindu Marasinghe
Username: dmarasin
Assignment: Assignment 4
Course Code: CIS*2500
Date of last revision: 2021-04-07

How to compile:
In linux command line:
make
How to run:
In linux command line:
./a4

Completed components:
/******
 enqueue:  adds a tweet to the rear of a tweetlist
 In: the head and tail nodes, and the node to add
 Out: none
*******/
/******
 dequeue:  removes a tweet from the front of a tweetlist
 In: the head and tail nodes
 Out: none
*******/
/******
 isEmpty:  indicates whether a tweet list is empty or not
 In: head tweet
 Out: boolean integer 1 if empty and 0 if not empty
*******/
/******
 printQueue:  Prints the queue
 In: the head node
 Out: none
*******/
/******
 sortID:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
/******
 reverse:  reverses tweetlist
 In: the head and tail nodes
 Out: none
*******/
/******
 sortUsername:  sorts tweetlist by ID
 In: the head and tail nodes
 Out: none
*******/
/******
 swap:  swaps 2 tweets in a tweet list
 In: the 2 nodes to be swapped
 Out: none
*******/

Limitations:
- Username cannot be more than 51 characters in length
- Tweet text cannot be more than 141 characters in length

Future improvements:
- Redesign the testing print statements to test one function at a time (it would look more organized)
- If inputting from the user, make sure to print a message warning the user about the length limits for username and tweet text