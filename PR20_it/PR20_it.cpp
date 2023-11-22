#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArray(int x[]) {
    for (int i = 0; i < 24; ++i) {
        x[i] = rand() % 71 - 17;
    }
}

void printArray(const int x[]) {
    for (int i = 0; i < 24; ++i) {
        std::cout << x[i] << " ";
    }
    std::cout << std::endl;
}

void processAndCount(int x[], int& count, int& sum) {
    count = 0;
    sum = 0;

    for (int i = 0; i < 24; ++i) {
        if (x[i] < 0 && x[i] % 3 != 0) {
            count++;
            sum += x[i];
            x[i] = 0;
        }
    }
}

int main() {
    std::srand(std::time(0));

    int myArray[24];
    int count, sum;

    fillArray(myArray);

    std::cout << "Original Array: ";
    printArray(myArray);

    processAndCount(myArray, count, sum);

    std::cout << "Count of elements satisfying the criteria: " << count << std::endl;
    std::cout << "Sum of elements satisfying the criteria: " << sum << std::endl;

    std::cout << "Modified Array : ";
    printArray(myArray);

    return 0;
}
