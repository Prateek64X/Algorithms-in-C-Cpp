// binary search
#include <iostream.h>
#include <algorithm.h>
using namespace std;

template<class T>
int binarySearch(T a[], int n, const T& x)
{// Search a[0] <= a[1] <= ... <= a[n-1] for x.
 // Return position if found; return -1 otherwise.
   int left = 0;                       // left end of segment
   int right = n - 1;                  // right end of segment
   while (left <= right) {
      int middle = (left + right)/2;   // middle of segment
      if (x == a[middle]) return middle;
      if (x > a[middle]) left = middle + 1;
      else right = middle - 1;
      }
   return -1; // x not found
}

int main()
{
   int a[4] = {5, 10, 16, 23}
   int b[10] = {0, 2, 3, 4, 6, 7, 9, 11, 13, 15};
   cout << binarySearch(a, 4, 10) << endl;
   cout << binarySearch(b, 10, 4) << endl;
}
