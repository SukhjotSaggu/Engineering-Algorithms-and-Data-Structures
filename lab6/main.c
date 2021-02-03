#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void displayStack();

extern int heapDelete();
extern void addHeap(int);
extern int heapSize();
extern void sortHeap(int);
extern void displayHeap(int);

int main(int argc, char * argv[])
{
  int j =0,num=0, value=0, input=0, remove;
  printf("Enter '-1' at the end of the inputs \n");
  while (100) {
    scanf("%d", &value);
    if(value==-1){
      break;;
    }
    addHeap(value);
    num++;
  }
  input = ((heapSize()-1)/2);
  for (j=input; j>=0; j--) {
    sortHeap(j);
  }		
  displayHeap(0);
  printf("\n");
  for (j=0; j<num; j++) {
    remove = heapDelete();
    push(remove);
  }
  printf("\n");
  for(j=0; j<num; j++) {
   printf("%d \n", pop());
  }
  printf("\n");
  displayStack();
  exit(0);
}