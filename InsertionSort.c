//Insertion Sort.C
//Git: https://github.com/Prateek64X
#include <math.h>
#include <stdio.h>

int insertionSort(int [], int);
void display(int [], int);

int main()
{
	int arr[10], n;

	//Entering elements
	printf("Enter total elements in list: ");
	scanf("%d", &n);
	printf("\nEnter elements of sorted list: ");
    for (int i=0; i<n; i++)
        scanf("%d", & arr[i]);
	
	insertionSort(arr, n);
	display(arr, n);
	return 0;
}

int insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++) 
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void display(int arr[], int n)
{
	printf("\nSorted elemets using quick sort: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%2d", arr[i]);
	}
	printf("\n");
}