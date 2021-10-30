#include <iostream>
using namespace std;

int main()
{
	int* wild_ptr;
	int* null_ptr = NULL;
	int* dangling_ptr = (int*)malloc(sizeof(int));
	
	int num = 12;
	int* ptr_num = &num;
 
	cout << "5. Pointer types & Reference types";
	cout << "\na. Null Pointer: " << null_ptr;
	cout << "\nb. Void Pointer: " << sizeof(null_ptr);
	cout << "\nc. Wild Pointer: " << wild_ptr;
	cout << "\nd. Dangling Pointer: " << dangling_ptr;
	cout << "\ne. Reference type: " << ptr_num;
	return 0;
}
