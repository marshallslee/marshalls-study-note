#include <iostream>

using namespace std;

struct Node {
    int value;
    struct Node *next;
};

struct Head {
    Node* head;
};

class LinkedList {
    public:
        Head* create() {
            Head *headNode = new Head;
            headNode->head = NULL;
            return headNode;
        }

        void addNode(Head *h, int value) {
            Node *newNode = new Node;
            Node *lastNode;

            newNode->next = NULL;
            newNode->value = value;

            if(h->head == NULL) {
                h->head = newNode;
                return;
            }
            
            lastNode = h->head;

            while(lastNode->next != NULL) {
                lastNode = lastNode->next;
            }
            lastNode->next = newNode;
        }

        void deleteNode(Head *h) {

        }

        void printAll(Head *h) {
            Node *p = h->head;
            while(p != NULL) {
                cout << p->value << " ";
                p = p->next;
            }
        }
};