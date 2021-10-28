//Linear Search.C
//Git: https://github.com/Prateek64X
# include <stdio.h>
#define MAX 1000

void linear_search(int [], int, int, int);

int main() 
{ 
    int a[MAX], i, n, data;

    //Entering elements
    printf("\nEnter the number of elements: "); 
    scanf("%d", &n); 
    printf("\nEnter the elements: "); 
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter the element to be seached: "); 
    scanf("%d", &data); 
    linear_search(a, data, 0, n); 
    return 0;
} 

void linear_search(int a[], int data, int position, int n)
{ 
    if(position < n){ 
        if(a[position] == data)
            printf("\nElement Found at index %d ", position); 
        else 
            linear_search(a, data, position + 1, n);
    } 
    else 
        printf("\nElement not found"); 
}