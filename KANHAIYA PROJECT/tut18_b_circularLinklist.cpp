#include <iostream>
using namespace std;
// This one is the tail shape circular linked list
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
    Node *ptr2; /*= new Node[sizeof(Node)];*/
    ptr2 = head;

    cout << "Total Number of element is " << count<< endl;
    if(head->next==head)
        cout<<"All the items are deleted successfully"<<endl;

        return;

    do
    {
        cout << " Linklist element at index " << i << " is :" << ptr2->data << endl;
        ptr2 = ptr2->next;
        i++;
    } while (ptr2 != head);
    // ptr2 = NULL;
    // delete ptr2;
}

void Node ::inserNode(Node *head, int data)
{
    Node *ptr = new Node[sizeof(Node)];
    Node *temp = head;
    ptr->data = data;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
    count++;
}

void Node::deleteNode(Node *head)
{
    Node *temp = (head);
    Node *ptr;
    if (head->next==head)
    {
    //     cout << "you cannot delete the last node , only you can set its value equal to zero"<<endl;
    //     head->data = 0;
        return; 
    }
    
    while (temp->next != head)
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = head;
    cout << "Deleted Element is " << temp->data << endl;
    count--;
    delete temp;
}

int Node::count; //its default value is zero
int main()
{

    Node *head;
    // Node *second;
    // Node *third;
    // Node *fourth;
    // Node *fifth;
    head = new Node[sizeof(Node)];
    // second = new Node[sizeof(Node)];
    // third = new Node[sizeof( Node)];
    // fourth = new Node[sizeof( Node)];
    // fifth = new Node[sizeof( Node)];
    // head->data = 45;
    head->next = head;

   
    head->inserNode(head, 100);
    head->inserNode(head, 200);
    head->inserNode(head, 229);
    head->inserNode(head, 300);
    head->inserNode(head, 590);
    cout << "After insertion" << endl;

    head->linkedListTraversal(head);
    // cout << "After deleting a node" << endl;
    head->deleteNode(head);
    head->deleteNode(head);
    head->deleteNode(head);
    head->deleteNode(head);
    head->deleteNode(head);
    head->deleteNode(head);
    head->deleteNode(head);
    head->linkedListTraversal(head);
    head->linkedListTraversal(head);
    // head->inserNode(head, 5);
    // head->inserNode(head, 51);
    // head->inserNode(head, 52);
    // head->inserNode(head, 53);
    // head->inserNode(head, 54);
    // head->linkedListTraversal(head);
    // head->deleteNode(head);
    // head->deleteNode(head);
    // head->linkedListTraversal(head);

    return 0;
}