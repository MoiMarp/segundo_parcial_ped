#include <iostream>
#include <stack>
#include <queue>
#include <vector>


struct Node {
  int data;
  Node* next;
  Node* prev;
};

//Ejercicio 1.1. Invertir una lista doblemente enlazada.
void ReverseList(Node*& head) {
  if (head == nullptr || head->next == nullptr) return;
  Node* current = head;
  Node* temp = nullptr;

    while (current != nullptr){
        
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; 
    }
    
    if (temp !=nullptr){
        head = temp->prev;
    }
    
}


//Ejercicio 1.2. Intercambiar nodos adyacentes
void SwapAdjacentPairs(Node*& head) {

    if (!head || !head->next) {
        return;
    }

    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        Node* first = current;
        Node* second = current->next;
        Node* prevNode = first->prev;
        Node* nextNode = second->next;

        second->next = first;
        first->prev = second;

        second->prev = prevNode;
        first->next = nextNode;

        if (prevNode != nullptr) {
            prevNode->next = second;
        } else {
            head = second;
        }

        if (nextNode != nullptr) {
            nextNode->prev = first;
        }

        current = first->next;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << " <-> ";
        temp = temp->next;
    }
    std::cout << "nullptr\n";
}


 




