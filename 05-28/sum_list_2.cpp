#include <iostream>
using namespace std;

struct Node {
    int data; // the single value that this Node holds
    Node *next; // a pointer to the next node

};

int sumList(Node *head) {
    if (!head) {
        // base case: sum of an empty list
        return 0;
    }

    // recursive case
    int sum = head->data + sumList(head);
    return sum;
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

    cout << sumList(one) << endl;

    return 0;
}