#include <iostream.h>
#include <algorithm>
#include "mergeSort.h"
#ifndef mergeSort_
#define mergeSort_

using namespace std;

int main()
{
   int a[10] = {10,7,8,9,4, 2, 3, 6, 5,1};

  // output the elements
   cout << "a[0:9] = ";
  // copy(a, a+10, ostream_iterator<int>(cout, " "));

	for(int i=0;i<10;i++)
	  cout<<a[i];
	 cout << endl;

  // sort
   mergesort(a,0,9);

  // output the sorted sequence
   cout << "After the sort, a[0:9] = ";
  //  copy(a, a+10, ostream_iterator<int>(cout, " "));
   for( i=0;i<10;i++)
	  cout<<a[i];
   cout << endl;
   return 0;
}
