Name: Agboado Gideon Azasu
ID: 10681572

#include<iostream>
using namespace std;
void swap(int elem1, int elem2) {         
   int temp;
   temp = elem1;
   elem1 = elem2;
   elem2 = temp;
}
void display(int *array, int size) {
   for(int index = 0; index < size; index++)
      cout << array[index] << " ";
   cout << endl;
}
void selectionSort(int array, int size) {
   int index, k, minelem;
   for(index = 0; index<size-1; index++) {
      minelem = index;   
      for(k = index + 1; k < size; k++)
         if(array[k] < array[minelem])
            imin = j;
         /
         swap(array[index], array[minelem]);
   }
}
int main() {
   int elem;
   cout << "Enter elements: ";
   cin >> elem;
   int arr[elem];          
   cout << "Enter elements:" << endl;
   for(int index = 0; index < elem; index++) {
      cin >> arr[index];
   }
   cout << "Unsorted Array: ";
   display(arr, elem);
   selectionSort(arr, elem);
   cout << "Sorted Array: ";
   display(arr, elem);
}