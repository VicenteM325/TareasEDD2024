#include <iostream>
#include <vector>

using namespace std;

void ordBurbuja(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int main() {
    vector<int> arr = {80, 78, 25, 9, 22, 11, 90};

    cout << "Arreglo Desordenado:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    ordBurbuja(arr);

    cout << "Arreglo ordenado:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}

//COMPLEJIDAD DEL ORDENAMIENTO BURBUJA:
//Su complejidad es cuadrática, esto quiere decir que el tiempo de ejecución aumenta
//cuadráticamente con el tamaño de la lista.
//Uno de los problemas que podríamos tener al usarlo es que este tenga que recorrer la
//lista varias veces, lo que se traduciría al tiempo de ejecución igual a n^2, donde
//n es el número de elementos en la lista
//Se podría señalar entonces, que el número medio de pasadas k sea 0(n) y el número total de
//comparaciones es 0(n 2 ), en el mejor de los casos