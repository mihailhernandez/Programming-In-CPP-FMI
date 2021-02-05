#include <iostream>

// 1. Enter array length              - done
// 2. Enter array elements            - done
// 3. Min / Max of array elements     - done
// 4. Sum of array elements           - done
// 5. Sort array (asc)/(desc)         - done
// 6. Find element by index           - done
// 7. Get first index of element      - done
// 8. Modify the data via the pointer - done
// 9. Find count for element          - done

int max_element_of_array(const int* array, const int array_size) {

	if (array_size == 0) {
		return -1;
	}

	int max = array[0];
	for (int i = 1; i < array_size; i++) {

		if (max < array[i]) {
			max = array[i];
		}

		// max = (max < array[i]) ? array[i] : max;
	}

	return max;
}

int min_element_of_array(const int* array, const int array_size) {

	if (array_size == 0) {
		return -1;
	}

	int min = array[0];
	for (int i = 1; i < array_size; i++) {

		if (min > array[i]) {
			min = array[i];
		}

		// min = (min > array[i]) ? array[i] : min;
	}

	return min;
}

int sum_of_element_of_array(const int* array, const int array_size) {

	int sum = 0;

	for (int i = 0; i < array_size; i++) {
		sum += array[i];
	}

	return sum;
}


void print_array(const int* array, const int array_size) {
	for (int i = 0; i < array_size; i++) {
		std::cout << array[i];
		if (i != array_size - 1) {
			std::cout << " ";
		}
	}
}

int element_at_index(const int* array, const int array_size, const int index) {
	// [1][124][6][-1]  index = 0 -> 1, 2 -> 6, -1 -> 1, 10 -> -1

	if (array_size == 0) {
		return -1;
	}

	if (index < 0) {
		return array[0];
	}

	if (index > array_size - 1) {
		return array[array_size - 1];
	}

	return array[index];
}

int find_first_index_of_elem(const int* array, const int array_size, const int element) {
	// [1][124][6][-1][-1]    element = -1 -> 3; 1 -> 0; 10 -> -1

	for (int i = 0; i < array_size; i++) {
		if (array[i] == element) {
			return i;
		}
	}

	return -1;
}

int element_count_in_array(const int* array, const int array_size, const int element) {

	int count = 0;

	for (int i = 0; i < array_size; i++) {
		if (array[i] == element) {
			count++;
		}
	}

	return count;
}


// swap a / b
// a = 5, b = 4
// swap(a, b) -> a = 4, b = 5
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}



// if current_elem > current_elem + 1 -> swap
// 1 0 -1
// 1 0 -> 1 > 0 ? -> yes -> swap
// 0 1 -1
// 0 -1 -> 0 > -1 ? yes -> swap
// -1 0 1
// 0 1 ... 
// -1 1 ...
// done
void sort_array(int* array, const int array_size, const bool asc) {

	if (array_size < 1) {
		return;
	}

	// i = 0;
	// [5][4][3][2][1] 
	//  0  1  2  3  4
	// [4][5][3][2][1] j = 1
	// [3][5][4][2][1] j = 2
	// [2][5][4][3][1] j = 3
	// [1][5][4][3][2] j = 4
	// i = 1;
	// [1][4][5][3][2] j = 2
	// [1][3][5][4][2] j = 3
	// [1][2][5][4][3] j = 4
	// i = 2;
	// [1][2][5][4][3] j = 3
	// [1][2][3][5][4] j = 4
	// i = 3
	// [1][2][3][4][5] j = 4
	// ..... 

	// bubble sort (principut na mehurcheto)
	for (int i = 0; i < array_size - 1; i++) {
		for (int j = i + 1; j < array_size; j++) {
			if ((asc && array[i] > array[j]) || (!asc && array[i] < array[j])) {
				swap(array[i], array[j]);
			}
		}
	}

}

void add_number_to_array(int* array, const int array_size, const int number) {
	for (int i = 0; i < array_size; i++) {
		array[i] += number;
	}
}

int main() {

	int array_size;

	std::cout << "Enter array size: ";
	std::cin >> array_size;

	// Dynamic array -> heap  space
	int* array = new int[array_size];

	for (int i = 0; i < array_size; i++) {
		std::cin >> array[i];
	}

	// Max
	std::cout << "Maximum element in array [";
	print_array(array, array_size);
	std::cout << "] is: " << max_element_of_array(array, array_size) << std::endl;

	// Min
	std::cout << "Minimum element in array [";
	print_array(array, array_size);
	std::cout << "] is: " << min_element_of_array(array, array_size) << std::endl;

	// Sum
	std::cout << "The sum of all elements in array [";
	print_array(array, array_size);
	std::cout << "] is: " << sum_of_element_of_array(array, array_size) << std::endl;

	// Elem at index
	std::cout << "Element in array [";
	print_array(array, array_size);
	std::cout << "] at index -1: " << element_at_index(array, array_size, -1) << std::endl;

	std::cout << "Element in array [";
	print_array(array, array_size);
	std::cout << "] at index 0: " << element_at_index(array, array_size, 0) << std::endl;

	std::cout << "Element in array [";
	print_array(array, array_size);
	std::cout << "] at index 101: " << element_at_index(array, array_size, 101) << std::endl;

	std::cout << "Element in array [";
	print_array(array, array_size);
	std::cout << "] at index 1: " << element_at_index(array, array_size, 1) << std::endl;

	// Find first elem index
	std::cout << "First index for element 5 in array [";
	print_array(array, array_size);
	std::cout << "] is: " << find_first_index_of_elem(array, array_size, 5) << std::endl;

	// Count of elements in array
	std::cout << "Count for element 5 in array [";
	print_array(array, array_size);
	std::cout << "] is: " << element_count_in_array(array, array_size, 5) << std::endl;

	// Sorting in ascending order
	std::cout << "Sorted array in ascending order of [";
	print_array(array, array_size);
	sort_array(array, array_size, true);
	std::cout << "] is: [";
	print_array(array, array_size);
	std::cout << "]" << std::endl;

	// Sorting in descending order
	std::cout << "Sorted array in descending order of [";
	print_array(array, array_size);
	sort_array(array, array_size, false);
	std::cout << "] is: [";
	print_array(array, array_size);
	std::cout << "]" << std::endl;

	// Add a number to the array
	std::cout << "Array [";
	print_array(array, array_size);
	std::cout << "] is +2: [";
	add_number_to_array(array, array_size, 2);
	print_array(array, array_size);
	std::cout << "]" << std::endl;

	// Add a number to the array
	std::cout << "Array [";
	print_array(array, array_size);
	std::cout << "] is -2: [";
	add_number_to_array(array, array_size, -2);
	print_array(array, array_size);
	std::cout << "]" << std::endl;

	delete[] array;

	return 0;
}