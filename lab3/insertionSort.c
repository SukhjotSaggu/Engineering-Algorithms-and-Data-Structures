#include "mySort.h"

void mySort(int array[], unsigned int first, unsigned int last)
    {
int current = 1;
int previous = 0;
int time = 1;
	for(time; time<=last; time++){
		myCopy(&array[time], &previous);
		current = time-1;
			while(current>=0 && (myCompare(array[current], previous)>=0)){
				mySwap(&array[current+1], &array[current]);
				current--;
			}
		myCopy(&previous, &array[current+1]);		
		}
    	}
