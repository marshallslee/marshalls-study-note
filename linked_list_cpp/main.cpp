#include <iostream>
#include "linkedlist.h"

using namespace std;

int main(void) {
    LinkedList ll;

    Head *list = ll.create();
    ll.addNode(list, 1);
    ll.addNode(list, 2);
    ll.addNode(list, 3);

    ll.printAll(list);
    return 0;
}