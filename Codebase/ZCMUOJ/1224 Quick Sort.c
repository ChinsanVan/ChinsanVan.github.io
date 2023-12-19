#include<stdio.h>
// Function to swap two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// Function to partition the array around a pivot
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1),j; // Index of smaller element
  for (j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

// Function to perform quicksort
void quicksort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);

    // Recursively sort elements before and after partition
    quicksort(array, low, pi - 1);
    quicksort(array, pi + 1, high);
  }
}
int main(){
	int n,i,j;
	while(~scanf("%d",&n)){
		int list[n];
		for(i=0;i<n;i++){
			scanf("%d",&list[i]);
		}
		quicksort(list,0,n-1);
		double sum=0.0;
		for(j=1;j<n-1;j++){
			sum+=list[j];
		}
		printf("%.2f\n",sum/(n-2));
	}
	return 0;
}
