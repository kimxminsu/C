#include <stdio.h>
//sizeof

 int main() {
 	// array
 	int arr[5] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 };
 	
 	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
 		printf("%d", arr[i]);
 		
 		printf("\n");
	 }
