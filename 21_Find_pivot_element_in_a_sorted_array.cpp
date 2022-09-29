//Sorted Rotated Array : 4 5 6 7 8 1 2 3
//1 is the Pivot Element
 
int getPivotElement(int *array, int left, int right){
   if (right < left) 
       return -1;
   if (right == left) 
       return left;
  
   int middle = (left + right)/2;
   if (middle < right && array[middle] > array[middle + 1])
       return middle;
   if (middle > left && array[middle] < array[middle - 1])
       return middle-1;
  
   if (array[left] >= array[middle]){
       return getPivotElement(array, left, middle-1);
   } else {
       return getPivotElement(array, middle + 1, right);
   }
}
