//Quick Sort.C
//Git: https://github.com/Prateek64X
# include<stdio.h> 

void quicksort(int [], int, int); 
int partition(int [], int, int);
void interchange(int [], int, int);

int main() {
    int num, i = 0, arr[25];

    //Entering elements
    printf("Enter the number of elements: ");
    scanf("%d", & num);
    printf("\nEnter the elements: ");
    for (i = 0; i < num; i++)
        scanf("%d", & arr[i]);
    quicksort(arr, 0, num-1);

    printf("\nThe elements after sorting are:\n");
    for (i = 0; i < num; i++)
        printf("%2d ", arr[i]);
    return 0;
}

void quicksort(int arr[], int low, int high) {
    int pivotpos;
    if (low < high) {
        pivotpos = partition(arr, low, high + 1);
        quicksort(arr, low, pivotpos - 1);
        quicksort(arr, pivotpos + 1, high);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int up = low, down = high;
    do {
        do
            up = up + 1;
        while (arr[up] < pivot);
        do
            down = down - 1;
        while (arr[down] > pivot);
        if (up < down)
            interchange(arr, up, down);
    } while (up < down);
    arr[low] = arr[down];
    arr[down] = pivot;
    return down;
}

void interchange(int arr[], int i, int j) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}