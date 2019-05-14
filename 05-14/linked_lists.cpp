#include <iostream>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

int main(int argc, char *argv[])
{
    // let's make the list 1->2->3->X
    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;
    one->next = two;
    (*one).data = 1;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = NULL;

    // let's make an empty list
    Node *head = NULL;
    // let's add a node containing 10 to that empty list
    Node *node_with_ten = new Node;
    node_with_ten->data = 10;
    // add it to the front of the existing list
    node_with_ten->next = head;
    // make this Node the new head
    head = node_with_ten;




    return 0;
}