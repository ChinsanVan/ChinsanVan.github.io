#include<stdio.h>
#include<stdlib.h>
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
	int n,i;
	while(scanf("%d\n",&n)!=EOF){
		if(n==0)break;
		int score[n];
		for(i=0;i<n;i++){
			scanf("%d",&score[i]);
		}
		int m=sizeof(score)/sizeof(score[0]);
		quicksort(score,0,m-1);
		for(i=0;i<m;i++){
			if(i==0)printf("%d",score[i]);
			else printf(" %d",score[i]);
		}printf("\n");
	}
	return 0;
}
