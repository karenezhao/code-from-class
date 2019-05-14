#include <iostream>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

// keeps track of the start and end of a list
struct LinkedList {
    Node *head;
    Node *tail;
};

void insertToHeadOfList(LinkedList* h, int value) {
    // make a new node with the given value
    Node *newnode = new Node;
    newnode->data = value;

    // set the next element of this new node to be the old head
    newnode->next = h->head; // the old head will be the second element

    // the head needs to be the newnode, because it should be at the front
    h->head = newnode;

    // if the list was initially empty, then the tail must also change
    if (h->tail == NULL) {
        h->tail = newnode; 
        // l is now a 1-element list
        // therefore the head and the tail are the same
    }
}

int lengthOfList(LinkedList *l) {
    int count = 0;
    // we need to iterate through the list
    Node *n = l->head; // start at the beginning of the list
    while (n != NULL) { // iterate as long as the current Node isn't NULL
        count++; // I've visited a Node; there's one more than I thought
        n = n->next; // move to the next Node
    }

    return count;
}

void printList(LinkedList *l) {
    for (Node *n = l->head; n != NULL; n = n->next) {
        cout << n->data << "->";
    }
    // we've gone through the entire list now,
    // so print X
    cout << "X\n";
}

// delete everything that was on the heap
void freeLinkedList(LinkedList *list) {
    // we need to iterate through the list and delete everything
    Node *n = list->head; // start at the beginning of the list
    while (n != NULL) { // iterate as long as the current Node isn't NULL
        Node *current_node = n;
        n = n->next; // move to the next Node (save the next pointer in n)
        // now I can delete current_node
        delete current_node;
    }

    // I've deleted all the Nodes; now I can safely deleted the LinkedList
    delete list;
}

int main(int argc, char *argv[])
{
    LinkedList *l = new LinkedList;

    // let's make an empty list
    l->head = NULL;
    l->tail = NULL; 
    // l is empty now

    cout << lengthOfList(l) << endl;
    printList(l);

    // let's add a node containing 10 to that empty list
    insertToHeadOfList(l, 10);
    cout << lengthOfList(l) << endl;
    printList(l);
    // let's add 20 to the start of this same list
    insertToHeadOfList(l, 20);
    cout << lengthOfList(l) << endl;
    printList(l);
    // now l should be the list 20->10->X

    freeLinkedList(l);

    return 0;
}