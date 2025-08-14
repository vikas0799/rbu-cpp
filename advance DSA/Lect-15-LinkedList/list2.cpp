#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int roll;
    string name;
    Node *next;

    Node(string n = "ramjane", int r = 0) {
        name = n;
        roll = r;
        next = NULL;
    }
};

void display(Node *traverse) {
    while (traverse != NULL) {
        cout << traverse->name << " " << traverse->roll << endl;
        traverse = traverse->next;
    }
}

void addlastnode(Node *head, string name1, int roll1) {
    Node* lastnode = new Node(name1, roll1); // dynamically allocate
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = lastnode;
}

int main() {
    Node one("one panday", 95);
    Node two("two yadav", 54);
    Node three("three dev", 46);
    Node four("four khattar", 41);

    one.next = &two;
    two.next = &three;
    three.next = &four;

    display(&one);

    addlastnode(&one, "vikas patel", 56);

    cout << endl;
    display(&one);

    return 0;
}
