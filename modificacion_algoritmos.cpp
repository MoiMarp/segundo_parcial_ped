#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <string>

int values[] = {2, 4, 4, 7, 9, 12, 15};

//Ejercicio 3.1. Ordenamiento por paridad
void InsertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = key;
  }
}

bool debeIrDespues(int a, int b) {
    bool esParA = (a % 2 == 0);
    bool esParB = (b % 2 == 0);

    if (!esParA && esParB) {
        return true;
    }

    if (esParA && !esParB) {
        return false;
    }

    return a > b;
}


//Ejercicio 3.2. Búsqueda binaria del mayor elemento menor que el objetivo
int FindLargestSmaller(
    const int values[],
    int n,
    int target) {
        
    int left = 0;
    int right = n - 1;
    int ans = -1; 

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (values[mid] < target) {
            ans = mid;       
            left = mid + 1;  
        } else {
            right = mid - 1; 
        }
    }

    return ans;
        
}
