#include<iostream>
#include <ctime>

// using namespace std;

int partition(int[],int,int);
void quickSort(int[],int,int);
void printAll(int[],int);

int main() {
  
  std::cout << "The initial 'fixed' numbers:" << std::endl;
  const int SIZE = 7;

  int numbers1[SIZE] = {1, 8, 5, 9, 4, 3, 7};
  printAll(numbers1, SIZE);
  std::cout << "The sorted 'fixed' numbers:" << std::endl;
  quickSort(numbers1, 0, SIZE - 1);
  printAll(numbers1, SIZE);

  std:: cout << "The random value numbers:" << std::endl;
  int numbers2[SIZE];
  srand(time(0));
  for (int i = 0; i < SIZE; i++) {
    numbers2[i] = rand() % 20 + 1;
  }
  printAll(numbers2, SIZE);
  std::cout << "The sorted random numbers:" << std::endl;
  quickSort(numbers2, 0, SIZE - 1);
  printAll(numbers2, SIZE);
  
  return 0;
  
}

int partition (int arr[], int first, int last) {
  
  int pivot = arr[last]; 
  int i= -1;
  for (int j = 0;j < last; j++) { 
    if(arr[j] < pivot) {
      i++; 
      std::swap(arr[i], arr[j]);
    }
  
  }
  
  std::swap(arr[i + 1], arr[last]); //swaps pivot in the new position
  
  return i + 1; //returns new pivot index
  
}

void quickSort(int arr[], int first, int last) {
  
  int pivotIndex;
  if(first >= last) {
    return;
  }
  pivotIndex = partition(arr, first, last);
  quickSort(arr, first , pivotIndex - 1); //sort left partition
  quickSort(arr, pivotIndex + 1, last); //sort right partition
  
}

void printAll(int arr[], int N) {
  
  for(int i = 0;i < N; i++) {
    std::cout << arr[i] << " ";
  }
  
  std::cout << std::endl << std::endl;
  
}