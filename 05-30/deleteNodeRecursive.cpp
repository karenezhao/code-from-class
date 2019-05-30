#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

struct LinkedList {
    Node *head;
    Node *tail;
};

Node* deleteNodeRecursiveHelper(Node *head, int value) {
    // base case
    if (head == NULL) {
        // empty list
        // I need to return a pointer to the start of
        // a list with all Nodes with data=value deleted
        return NULL;
    }

    // recursive case 
    // delete all Nodes with value = data from the smaller list
    Node *new_head_of_smaller_list = 
        deleteNodeRecursiveHelper(head->next, value);
    // now, we just need to worry about removing all the
    // data = value nodes from the bigger list
    // (we just need to look at the head now)
    if (head->data == value) {
        // we don't want to keep this Node
        delete head; // remove the node, because data == value
        return new_head_of_smaller_list;
    } else {
        // we do want to keep the head
        head->next = new_head_of_smaller_list;
        return head;
    }
}

void deleteNodeRecursive(LinkedList *list, int value) {
    // call the recursive helper function to 
    // actually do the deletion
    // it'll give us back a pointer to the head of the new
    // list, with all the stuff deleted
    Node *new_head = deleteNodeRecursiveHelper(list->head, value);

    // set the head and tail of the list,
    // because they might have changed
    list->head = new_head;

    // figure out what the tail should be
    Node *new_tail = new_head;
    while (new_tail != NULL && new_tail->next != NULL) {
        new_tail = new_tail->next;
        // the while loop will stop when the next pointer is NULL;
        // (i.e., we reached the last element of the list)
    }
    list->tail = new_tail;
}

void printList(LinkedList *list) {
    for (Node *n = list->head; n != NULL; n = n->next) {
        cout << n->data << "->";
    }
    cout << "X\n";
}

int main(int argc, char *argv[])
{
    // build the list 2->1->2->3->2->X
    LinkedList *list = new LinkedList;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;
    Node *fifth = new Node;
    list->head = first;
    list->tail = fifth;
    first->data = 2;
    second->data = 1;
    third->data = 2;
    fourth->data = 3;
    fifth->data = 2;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    printList(list);
    deleteNodeRecursive(list, 2);
    printList(list); // should print "1->3->X"

    return 0;
}