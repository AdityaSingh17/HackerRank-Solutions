// Insert a node at a specific position in a linked list
// Problem Link: https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem

#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data)
    {
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head)
        {
            this->head = node;
        }
        else
        {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_singly_linked_list(SinglyLinkedListNode *node, string sep, ofstream &fout)
{
    while (node)
    {
        fout << node->data;

        node = node->next;

        if (node)
        {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode *node)
{
    while (node)
    {
        SinglyLinkedListNode *temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the insertNodeAtPosition function below.
/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *head, int data, int position)
{
    SinglyLinkedListNode *temp = head;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode *newnode = new SinglyLinkedListNode(data);

    if (head == NULL)
        return newnode;

    if (position == 0)
    {
        newnode->next = head;
        return newnode;
    }

    position--;
    while (position--)
        temp = temp->next;

    next = temp->next;
    temp->next = newnode;
    newnode->next = next;

    return head;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    SinglyLinkedList *llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < llist_count; i++)
    {
        int llist_item;
        cin >> llist_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        llist->insert_node(llist_item);
    }

    int data;
    cin >> data;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int position;
    cin >> position;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    SinglyLinkedListNode *llist_head = insertNodeAtPosition(llist->head, data, position);

    print_singly_linked_list(llist_head, " ", fout);
    fout << "\n";

    free_singly_linked_list(llist_head);

    fout.close();

    return 0;
}