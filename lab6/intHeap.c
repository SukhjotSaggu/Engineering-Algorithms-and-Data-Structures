#include <stdio.h>
#include <stdlib.h>
/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */

int size = 0;
int heap[100];

/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
int heapDelete() {
	int hold;
	hold = heap[0];
	size--;
	heap[0] = heap[size];
	heap[size] = hold;
	sortHeap(0);
	printf("%d \n",heap[size]);
	return (heap[size]);
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add) {
	heap[size] = thing2add;
	size++;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize() {
	return size;
}

/*
* Sort the heap 
*/
void sortHeap(int num) {
	int biggest=num, hold, left=1+(2*num), right=2+(2*num);
	if((left<size)&&(heap[left]>heap[biggest])){
		biggest = left;
	}
	if((right < size) && (heap[right] > heap[biggest])){
		biggest = right;
	}
	if(biggest!=num){
		hold = heap[biggest];
		heap[biggest] = heap[num];
		heap[num] = hold;
		sortHeap(biggest);
	}
}

/*
* Display heap in XML format 
*/
void displayHeap(int num) {
	int left=1+(2*num), right=2+(2*num);
	printf("<node id='%d'>", heap[num]);
	if(left<size){
		displayHeap(left);
	}
	if(right<size){
		displayHeap(right);
	}
	printf("</node>");
}