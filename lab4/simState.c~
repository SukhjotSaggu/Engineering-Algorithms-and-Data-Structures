#include <stdlib.h>
#include <stdio.h>

struct state{
	char state, nextState, previousState;
};

int main(int argc, char * argv[])
{
	int parameter, input, change; /* better to use strtol */
	char state, inputState;
	char garbage[8];

	struct state machine[8];
	struct state current;


	machine[0].state = 'A';
	machine[0].previousState = 'D';
	machine[0].nextState = 'E';
	machine[1].state = 'B';
	machine[1].previousState = 'A';
	machine[1].nextState = 'H';
	machine[2].state = 'C';
	machine[2].previousState = 'B';
	machine[2].nextState = 'A';
	machine[3].state = 'D';
	machine[3].previousState = 'G';
	machine[3].nextState = 'B';
	machine[4].state = 'E';
	machine[4].previousState = 'C';
	machine[4].nextState = 'G';
	machine[5].state = 'F';
	machine[5].previousState = 'E';
	machine[5].nextState = 'C';
	machine[6].state = 'G';
	machine[6].previousState = 'H';
	machine[6].nextState = 'D';
	machine[7].state = 'H';
	machine[7].previousState = 'H';
	machine[7].nextState = 'F';
	
	int i, j;
	for(i = 0;i < 8;i++){
	fprintf(stderr, "%c %c %c\n", machine[i].state, machine[i].previousState ,machine[i].nextState);
	}

	current.state = 'D';
    	current.previousState = 'G';
	current.nextState = 'B';
	
	fprintf(stderr, "\nThe current state of the machine is:\n %c\n", current.state);

		scanf("%c", &parameter);
		
	while(parameter != 'z'){
	
		if(parameter == '0'){
			i = 0;
			while(i < 8){
				if(current.previousState == machine[i].state){
					current.state = machine[i].state;
					current.previousState = machine[i].previousState;
					current.nextState = machine[i].nextState;
					break;
				}
			i++;		
			}
		fprintf(stderr, "\nThe new state of the machine is:\n %c\n", current.state);
		}

		if(parameter == '1'){
			i = 0;
			while(i < 8){
				if(current.nextState == machine[i].state){
					current.state = machine[i].state;
					current.previousState = machine[i].previousState;
					current.nextState = machine[i].nextState;
					break;
				}
			i++;		
			}
		fprintf(stderr, "\nThe new state of the machine is:\n %c\n",current.state);
		}

		if(parameter == 'c' || parameter == 'C'){
			fprintf(stderr, "\nEnter '0' or '1' then enter the name of state WITH A SPACE!:");
			scanf("%d %c", &input, &inputState);
			if(input == 0){	
				current.previousState = inputState;
			}
			if(input == 1){
				current.nextState = inputState;
			}
			
			i = 0;
			while(i < 8){
				if(current.state == machine[i].state){
					machine[i].state = current.state;
					machine[i].previousState = current.previousState;
					machine[i].nextState = current.nextState;
					break;
				}
			i++;		
			}
		}

		if(parameter == 'p'|| parameter == 'P'){
			for(i = 0;i < 8;i++){
				fprintf(stderr, "%c %c %c\n", machine[i].state, machine[i].previousState ,machine[i].nextState);
			}
		}

		if(parameter == 'g'|| parameter == 'G'){
			for(i = 0;i < 8; i++){
				if ((current.previousState == machine[i].state || current.nextState == machine[i].state) && (current.previousState != current.state && current.nextState != current.state)){
					garbage[i] = machine[i].state;
				}
			}
			fprintf(stderr, "\nThe reachable states are:");
			for(i = 0;i < 8; i++){
				fprintf(stderr, "\n%c", garbage[i]);
			}
		}

		if(parameter == 'd'|| parameter == 'D'){
			fprintf(stderr, "Enter name of state to delete in CAPITOL!:");
			scanf("%c", &inputState);
			scanf("%c", &inputState);
			i = 0;
			while(i < 8){
				if(inputState == machine[i].state){
					machine[i].state = ' ';
					machine[i].previousState = ' ';
					machine[i].nextState = ' ';
					break;
				}
			i++;		
			}
		}

	scanf("%c", &parameter);
	}

	exit(0);
}

