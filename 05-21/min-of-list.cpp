#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

int min(int x, int y) {
    if (x < y) return x;
    else return y;
}

int minOfList(Node *head) {
    assert(head); // head can't be NULL

    // base case: list holds 1 element only
    if (head->next == NULL) {
        return head->data;
    }
    
    // recursive case
    // compare our current head's data
    // to the min of the smaller list
    return min(head->data, minOfList(head->next));
    
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

    cout << minOfList(one) << endl;

    return 0;
}