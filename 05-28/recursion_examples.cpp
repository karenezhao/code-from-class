#include <iostream>
#include <cstring>
#include <string>
#include <cassert>
using namespace std;

// this is easy to code, but quite inefficient
int fib(int n) {
    assert(n >= 0);

    // base case
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        return fib(n-1) + fib(n-2);
    }
}

// computes a^b
double pow(double a, int b) {
    assert(b >= 0);

    if (b == 0) return 1;

    // if we got this far, b was positive
    return a * pow(a, b - 1);
}

struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;
};

int sumTree(TreeNode *n) {
    // base case: empty tree. Sum is 0.
    if (n == NULL) return 0;

    // recursive case:
    // sum of the nodes is my current node's data value
    // PLUS the sum of the left sub-tree PLUS the sum
    // of the right sub-tree
    return n->data + sumTree(n->left) + sumTree(n->right);
}

int main(int argc, char *argv[])
{
    cout << fib(5) << endl;

    // cout << fib(200) << endl; // never will end

    cout << pow(2.0, 8) << endl;
    cout << pow(5.0, 2) << endl;
    cout << pow(7.0, 0) << endl;


    TreeNode one = {1, NULL, NULL};
    TreeNode two = {2, NULL, NULL};
    TreeNode three = {3, NULL, NULL};
    TreeNode four = {4, NULL, NULL};
    TreeNode five = {5, NULL, NULL};
    TreeNode six = {6, NULL, NULL};
    TreeNode seven = {7, NULL, NULL};

    two.left = &four;
    two.right = &five;
    three.left = &six;
    three.right = &seven;
    one.left = &two;
    one.right = &three;

    cout << sumTree(&one) << endl;

    return 0;
}