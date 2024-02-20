#include <iostream>
#include <vector>
using namespace std;


void insertSort(vector<int>&arreglo) {
    for (int i = 1; i < arreglo.size(); i++) {
        int j = i;
        int aux = arreglo[i];

        while (j > 0 && aux < arreglo[j - 1]) {
            arreglo[j] = arreglo[j - 1];
            j--;
        }
        arreglo[j] = aux;
    }
}

void imprimirArreglo(vector<int>arreglo){
    for(int i = 0; i<arreglo.size(); i++){
        cout<<arreglo[i]<< " ";
    }
    cout << endl;

}
int main(){
    vector <int> test = {3, 10, 14, 6};
    cout<< "Arreglo desordenado"<<endl;
    imprimirArreglo(test);
    insertSort(test);
    cout<< "Arreglo ordenado" << endl;
    imprimirArreglo(test);

}
