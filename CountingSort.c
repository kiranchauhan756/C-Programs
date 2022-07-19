// Counting sort in C programming

#include <stdio.h>

void countingSort(int array[], int size) {
  int output[100];

  // Find the largest element of the array
  int max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max)
      max = array[i];
  }

  // The size of count must be at least (max+1) but
  // we cannot declare it as int count(max+1) in C as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int count[100];

  // Initialize count array with all zeros.
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
    printf("%d ",count[i]);
    // 0 0 0 0 0 0 0 
  }
printf("\n");
  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
   printf("%d ",count[i]);
  }
  printf("\n");

  // Store the cummulative count of each array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
    printf("%d ",count[i]);
  }

  // Find the index of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// Driver code
int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  printf("Before counting sort\n");
  printArray(array,n);
  countingSort(array, n);
  printf("After counting sort\n");
  printArray(array, n);
}