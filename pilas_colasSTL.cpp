#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>


//Ejercicio 2.1. Eliminar elementos consecutivos repetidos de una pila 
void RemoveConsecutiveDuplicates(std::stack<int>& values){

     std::stack<int> aux1;

    while (!values.empty()) {
        int current = values.top();
        values.pop();

        if (aux1.empty() || aux1.top() != current) {
            aux1.push(current);
        }
    }

    while (!aux1.empty()) {
        values.push(aux1.top());
        aux1.pop();
    }

}


//Ejercicio 2.2. Separar solicitudes de una cola
void SeparateRequests(
    std::queue<int>& requests,
    std::queue<int>& priority) {
  
    if (requests.empty()) {
        return;
    }


    int n = requests.size();

    for (int i = 0; i < n; ++i) {
        int current = requests.front();
        requests.pop();

        if (current % 3 == 0) {
            priority.push(current);
        } else {
            requests.push(current);
        }
    }
}
