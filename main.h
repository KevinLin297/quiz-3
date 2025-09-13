#include <iostream>
#include <iomanip>
using namespace std;

class Node {
    public:
        int value;
        Node* next = nullptr;
};

Node* insertEnd(Node* head, int key);

float interQuartile(Node* head);