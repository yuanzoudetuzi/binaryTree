
#include <iostream>
using namespace std;

#include "BinaryTree.h"
#include "BinaryTree.cpp"
int main() {
    int root = 5;
    int a =1,b=2,c=3,d=4,e=6,f=8;

    BinaryTree<int> bTree(root);
    bTree.insert(a);
    bTree.insert(b);
    bTree.insert(c);
    bTree.insert(d);
    bTree.insert(e);
    bTree.insert(f);

  /*  bTree.insert(3);
    bTree.insert(4);
    bTree.insert(5);*/
    bTree.preOrder();
    cout << endl;
    return 0;
}