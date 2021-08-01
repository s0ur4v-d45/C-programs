#include <stdio.h>
int recursiveBinarySearch(int array[], int first, int last, int element){
   if (last >= first){
      int mid = first + last /2;
      if (array[mid] == element)
         return mid;
      if (array[mid] > element)
         return recursiveBinarySearch(array, first, mid-1, element);
      return recursiveBinarySearch(array, mid+1, last, element);
   }
   return -1;
}
int main(void){
   int array[10],i;
   	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	} 
  
   int value = 9;
   int found_index = recursiveBinarySearch(array, 0, 9 , element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
} 
