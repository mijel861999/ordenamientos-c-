#include <iostream>
#include <array>

using namespace std;

void mostrarArray(int arr[], int leng);
void selectionSort(int arr[], int leng);

int main() {
	int len = 6;
	int array[len] = {2, 4, 1, -3, -2, 4};

	mostrarArray(array, len);
	selectionSort(array, len);
	mostrarArray(array, len);
	return 0;
}

void mostrarArray(int arr[], int leng){
	cout << "[ ";

	for(int i = 0; i < leng; i++){
		if (i == leng -1) {
			cout << arr[i];
		} else {
			cout << arr[i] << " ,";
		}
	}

	cout << " ] "<< endl;
}

void selectionSort(int arr[], int leng) {
	int min_id, num_aux;
	// len - 1 ya que el último elemento ya estará ordendo
	for(int i = 0; i < leng-1; i++) {
		min_id = i;

		for (int j = i+1; j < leng; j++) {
			if (arr[j] < arr[min_id]) {
				min_id = j;
			}
		}
		num_aux = arr[i];
		arr[i] = arr[min_id];
		arr[min_id] = num_aux;
	}
}
