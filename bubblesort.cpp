Name: Agboado Gideon Azasu
ID: 10681572



#include<iostream>
using namespace std;
void swapping(int elem1, int elem2) {     
   int temp;
   temp = elem1;
   elem1 = elem2;
   elem2 = temp;
}
void display(int Array, int size) {
   for(int index = 0; index < size; index++)
      cout << Array[index] << " ";
   cout << endl;
}
void bubbleSort(int Array, int size) {
   for(int index = 0; index < size; index++) {
      int swap = 0;         
      for(int k = 0; k < size-index-1; k++) {
         if(array[k] > array[k+1]) {       
            swapping(Array[k], Array[k+1]);
            swap = 1;    
         }
      }
      if(!swap)
         break;      
   }
}
int main() {
   int elem;
   cout << "Enter number of elements: ";
   cin >> elem;
   int array[elem];    
   cout << "Enter elements:" << endl;
   for(int index = 0; index < n; index++) {
      cin >> array[i];
   }
   cout << "Sorted Array: ";
   display(array, elem);
   bubbleSort(array, elem);
   cout << "Sorting Array: ";
   display(array, elem);
}