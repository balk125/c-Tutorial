#include <iostream>
using namespace std;

class Node
{
    static int count;

public:
    int data;
    class Node *next;
    void linkedListTraversal(Node *head);
    void inserNode(Node *head, int data);
    void deleteNode(Node *head);
};

void Node::linkedListTraversal(Node *head)
{
    int i = 0;
    Node *ptr = new Node[sizeof(Node)];
    ptr = head;

    cout << "Total Number of Employee is " << count + 1<<endl;
    while (ptr != NULL)
    {
        cout << " Linklist element at index " << i<< " is :" << ptr->data << endl;
        ptr = ptr->next;
        i++;
    }
    delete ptr;
}

void Node ::inserNode(Node *head, int data)
{
    Node *ptr = new Node[sizeof(Node)];
    Node *temp = head;
    ptr->data = data;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
    count++;
}

void Node::deleteNode(Node *head)
{   
    Node *temp = (head);
    Node *ptr;
    while (temp->next != NULL)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = NULL;
    cout << "Deleted Element is " << temp->data<<endl;
    count--;
    delete temp;
    
}

int Node::count;//its default value is zero
int main()
{

    Node *head;
    // Node *second;
    // Node *third;
    // Node *fourth;
    // Node *fifth;
    head = new Node[sizeof(Node)];
    cout << "The size of head is " << sizeof(head) << endl;
    // second = new Node[sizeof( Node)];
    // third = new Node[sizeof( Node)];
    // fourth = new Node[sizeof( Node)];
    // fifth = new Node[sizeof( Node)];
    head->data = 45;
    head->next = NULL;

    // head->next=second;
    // second->data=100;
    // second->next = third;
    // third->data = 789;
    // third->next = fourth;
    // fourth->data = 654;
    // fourth->next = fifth;
    // fifth->data = 400;
    // fifth->next = NULL;
    head->linkedListTraversal(head);
    head->inserNode(head, 100);
    head->inserNode(head, 200);
    head->inserNode(head, 229);
    head->inserNode(head, 300);
    head->inserNode(head, 590);
    cout << "After insertion" << endl;

    head->linkedListTraversal(head);
    cout<<"After deleting a node"<<endl;
    head->deleteNode(head);
    head->linkedListTraversal(head);

    return 0;
}