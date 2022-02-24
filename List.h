//
// Created by Stanley Preschlack on 2/2/22.
//

#ifndef LINKEDLIST_LIST_H
#define LINKEDLIST_LIST_H

class List {
private:

    typedef struct node {
        int data;
        node* next;
    } * nodePtr;

     nodePtr head;
     nodePtr curr;
     nodePtr temp;

public:

    List();
    void AddNode(int addData);
    void DeleteNode(int delData);
    void PrintList();

};

#endif //LINKEDLIST_LIST_H
