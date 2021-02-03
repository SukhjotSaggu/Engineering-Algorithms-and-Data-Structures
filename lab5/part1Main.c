#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();
int main(int argc, char * argv[])
{
  int ch;
  while ((ch = getchar()) != EOF) {
    if (!(isalpha(ch) || ch == '>' || ch == '<' || ch == '/'))
      continue;
    else if(ch == '<'){
fprintf(stderr, "I am HERE");
	ch = getchar();
	if(isalpha(ch) != 0)
	{
fprintf(stderr, "\nI am HERE 2");
		if((getchar() == '>') && (getchar() != EOF))
		{
		push(ch);
fprintf(stderr, "\nI am HERE 3");
		}
//		else
//		{
//			exit(1);
//		}
	}
	if(ch == '/'){
fprintf(stderr, "\nI am HERE 4");
		ch = getchar();
		if(isalpha(ch) != 0)
		{
			if((getchar() == '>') && (getchar() != EOF))
			{
fprintf(stderr, "\nI am HERE 4.5");
				if(isEmpty() == 0)
				{
fprintf(stderr, "\nI am HERE 5");
//					continue;
//fprintf(stderr, "%d" (pop()));
					if(pop() == ch)
					{
fprintf(stderr, "\nI am HERE 6");
//						continue;
					}
					else
					{
						fprintf(stderr, "Stack and popped character do not match");
						exit(1);
					}
				}
			}
			else
			{
				fprintf(stderr, "No end tag");
				exit(1);
			}		
		}
	}

    }
	else{
		exit(0);
	}    
  }
	if((isEmpty()) == 1){
		exit(0);
	}
  exit(0);
}
