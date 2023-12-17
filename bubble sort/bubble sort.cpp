#include<iostream>

void bubble_sort(int size, int arr[]) {
	for (int i{ 0 }; i < size; i++) {
		for (int j{ 0 }; j < size-1; j++) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
				
			}
		}
	}
}
int main() {
	const int size{ 12 };
	int arr[size] = { 234,11,2,32,3443,65,776,88,90,2,2,2 };
	bubble_sort(size, arr);
	for (int i{ 0 }; i < size; i++) {
		std::cout << arr[i] << " ";
	}
}