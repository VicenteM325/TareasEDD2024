#include <iostream>
#include <vector>

using namespace std;

int calcularPosicion(const vector<int>& indices, const vector<int>& dimensiones) {
    if (indices.size() != dimensiones.size()) {
        cout<<"La longitud de los índices y las dimensiones debe ser la misma"<<endl;
        exit(0);
    }

    int posicion = 0;
    int factor = 1;

    for (int i = indices.size() - 1; i >= 0; --i) {
        if (indices[i] >= dimensiones[i] || indices[i] < 0) {
            cout<<"El índice en la dimensión " + to_string(i) + " está fuera de rango"<<endl;
        }

        posicion += indices[i] * factor;
        factor *= dimensiones[i];
    }

    return posicion;
}

int main() {
    vector<int> dimensiones = {8, 4, 5, 6};
    vector<int> indices = {1, 2, 3, 4};

        int posicion = calcularPosicion(indices, dimensiones);
        cout << "La posición en memoria del elemento con índices ";
        for (int i = 0; i < indices.size(); ++i) {
            cout << indices[i];
            if (i < indices.size() - 1) {
                cout << ", ";
            }
        }
        cout << " es: " << posicion << endl;

    return 0;
}