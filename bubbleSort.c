//Bubble Sort.C
//Git: https://github.com/Prateek64X
#include <stdio.h> 

void bubblesort(int[], int) ;

int main() {
    int i, n, x[25];

    //Entering elements
    printf("\n Enter the number of elements: ");
    scanf("%d", & n);
    printf("\n Enter Data:");
    for (i = 0; i < n; i++)
        scanf("%d", & x[i]);
    bubblesort(x, n);
    printf("\n Array Elements after sorting: ");
    for (i = 0; i < n; i++)
        printf("%5d", x[i]);
    return 0;
}

void bubblesort(int x[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}