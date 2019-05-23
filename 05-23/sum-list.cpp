#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

struct LinkedList {
    Node *head;
    Node *tail;
};

int sumLinkedListHelper(Node* n) {
    // base case: sum of empty list
    if (n == NULL) {
        return 0;
    }

    // recursive case
    // you get to assume that the recursive call solves the problem
    // correctly!!!
    int sum_of_smaller_list = sumLinkedListHelper(n->next);
    return n->data + sum_of_smaller_list;
}

int sumLinkedList(LinkedList *l) {
    return sumLinkedListHelper(l->head);
}

int main(int argc, char *argv[])
{
    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;
    Node *four = new Node;
    one->next = two;
    (*one).data = 10;
    two->data = 50;
    two->next = three;
    three->data = 20;
    three->next = four;
    four->data = 40;
    four->next = NULL;

    LinkedList *l = new LinkedList;
    l->head = one;
    l->tail = four;

    cout << sumLinkedList(l) << endl;

    return 0;
}