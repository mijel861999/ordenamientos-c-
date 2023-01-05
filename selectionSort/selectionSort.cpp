#include <iostream>

using namespace std;

void mostrarArray(int arr[], int tam);
void selectionSort(int arr[], int tam);

int main(){
	int tam = 6;
	int array[tam] = {1, 10, -2, -3, 199, 0};

	mostrarArray(array, tam);
	selectionSort(array, tam);
	mostrarArray(array, tam);

	return 0;
}

void mostrarArray(int arr[], int tam){
	cout <<"----------------------" << endl;
	cout << "[ ";
	for (int i = 0; i < tam; i++) {
		if (i == tam -1){
			cout << arr[i];
		} else {
			cout << arr[i] << ", ";
		}
	}
	cout << "] " << endl;
}

void selectionSort(int arr[], int tam){
	int num_aux, min_id;

	for(int i = 0; i < tam -1; i++) {
		min_id = i;
		for (int j = i + 1; j < tam; j++) {
			if (arr[j] < arr[min_id]) {
				min_id = j;
			}
		}

		// Hacemos el swap
		num_aux = arr[i] ;
		arr[i] = arr[min_id];
		arr[min_id] = num_aux;
	}
}

// GRACIAS C:
