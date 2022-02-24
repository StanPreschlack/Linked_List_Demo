//
// Created by Stanley Preschlack on 2/2/22.
//

#include "List.h"
#include <iostream>

using namespace std;

inline List::List() {
    head = nullptr;
    curr = nullptr;
    temp = nullptr;
}
inline void List::AddNode(int addData) {
    auto n = new node;
    n->next = nullptr;
    n->data = addData;

    if(head != nullptr) {
        curr = head;
        while(curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = n;
    } else {
        head = n;
    }
}
inline void List::DeleteNode(int delData) {
    nodePtr delPtr = nullptr;
    temp = head;
    curr = head;
    while (curr != nullptr && curr->data != delData) {
        temp = curr;
        curr = curr->next;
    }
    if (curr == nullptr) {
        cout << delData << " was not in the list\n";
        delete delPtr;
    } else {
        delPtr = curr;
        curr = curr->next;
        temp->next = curr;
        delete delPtr;
        cout << "the value " << delData << " was deleted\n";
    }
}
inline void List::PrintList() {
    curr = head;
    while (curr != nullptr) {
        cout << curr->data << endl;
        curr = curr->next;
    }
}
