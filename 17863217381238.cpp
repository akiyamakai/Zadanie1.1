#include <iostream>

int main() {
    const int SIZE = 5; 
    int arr[SIZE] = { 5, 2, 8, 1, 9 }; 


    int min_element = arr[0];
    int max_element = arr[0];


    for (int i = 1; i < SIZE; ++i) {
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }


    std::cout << "Min: " << min_element << std::endl;
    std::cout << "Max: " << max_element << std::endl;

    return 0;
}
