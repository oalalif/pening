#include <iostream>
#include <cstdlib>

class Node
{
public:
    Node* next;
    int data;
};

class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void add(int data);
    void print();
};

LinkedList::LinkedList()
{
    this->length = 0;
    this->head = nullptr;
}

LinkedList::~LinkedList()
{
    std::cout << "LIST DELETED" << std::endl;
}

void LinkedList::add(int data)
{
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void LinkedList::print()
{
    Node* current = this->head;
    while (current)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    LinkedList* list = new LinkedList();
    
    int numElements;
    std::cout << "Enter the number of elements to add: ";
    std::cin >> numElements;
    
    for (int i = 0; i < numElements; ++i)
    {
        int data;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> data;
        list->add(data);
    }
    
    list->print();
    std::cout << "List Length: " << list->length << std::endl;
    delete list;
    return 0;
}

//modifikasi program, sehingga user dapat menginputkan sendiri data