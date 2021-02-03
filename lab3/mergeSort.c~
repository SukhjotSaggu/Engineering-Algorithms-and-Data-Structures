#include "mySort.h"

void merge(int array[],int var1, int var2, int var3,int var4){
	int tempVar1,tempVar2,tempVar3=0;

	tempVar1=var1;
	tempVar2=var3;

	int numberArray[MAX_SIZE_N_TO_SORT];

	while((tempVar1 <= var2) && (tempVar2 <= var4)){
		if((myCompare(array[tempVar1], array[tempVar2])) < 0){
		numberArray[tempVar3++] = array[tempVar1++];
		}
		
		else{
		numberArray[tempVar3++] = array[tempVar2++];
		}		
    	}
	
	while(tempVar1<=var2){
		myCopy(&array[tempVar1++], &numberArray[tempVar3++]);
	}
	
	while(tempVar2<=var4){
		myCopy(&array[tempVar2++], &numberArray[tempVar3++]);
	}
	
	for((tempVar1 = var1), (tempVar3 = 0);(tempVar1 <= var4); tempVar1++, tempVar3++){
	mySwap(&array[tempVar1], &numberArray[tempVar3]);
	}
}

void mySort(int array[], unsigned int first, unsigned int last){
	int middle=0;

	    if(first < last){
		middle = (first+last)/2;
		mySort(array, first, middle);
		mySort(array, (middle+1), last);
		merge(array, first, middle, (middle+1), last);
	    }
    }
